#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(n);
        fill(freq.begin(), freq.end(), 0);
        vector<int> alloc(n);
        fill(alloc.begin(), alloc.end(), 0);
        for (int i = 1; i <= n; ++i) {
            int carry;
            cin >> carry;
            if((alloc[carry-1]==0)||((i-alloc[carry-1])%2==1)){
                freq[carry-1] += 1;
                alloc[carry-1] = i;
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << freq[i] << " ";

        }
        cout << endl;
    }


}