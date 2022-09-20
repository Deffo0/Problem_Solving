#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    pair <int, int> input;
    cin >> input.first >> input.second;
    int freq_arr[input.second * 2 + 1];

    int a;
    for (int i = 0; i < input.first; ++i) {
        cin >> a ;
        freq_arr[a + input.second]++;

    }
    for (int i = 0; i < 2 * input.second ; ++i) {
        if (freq_arr[i] == 0){
            cout << i - input.second;
            return 0;
        }

    }
}