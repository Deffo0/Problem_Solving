#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, m, k, counter = 0;
    cin >> n >> m >> k;
    vector<int> players(m+1);

    for (int i = 0; i < m + 1; ++i) {
        cin >> players[i];
    }

    for (int i = m-1; i >=0 ; --i) {
        bitset<20> a(players[m]);
        bitset<20> b(players[i]);
        if ((a ^ b).count() <= k){
            counter++;
        }
    }
    cout << counter << endl;
}
