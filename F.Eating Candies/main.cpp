#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int test ;
    cin >> test ;
    for (int i = 0; i < test; i++){
        int size;
        cin >> size;
        vector<int> candies(size);
        for (int j = 0; j < size; ++j) {
            cin >> candies[j];
        }
        int alice = 0, bob = size - 1, alice_sum = 0, bob_sum = 0, optimal = 0;
        while (alice <= bob) {
            if (alice_sum <= bob_sum) {
                alice_sum += candies[alice];
                alice++;
            } else {
                bob_sum += candies[bob];
                bob--;
            }
            if (alice_sum == bob_sum) {
                optimal = max(optimal, alice + size - bob - 1);
            }
        }
        cout << optimal << endl;
    }

}
