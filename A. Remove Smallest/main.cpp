#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];


        }
        sort(arr.begin(), arr.end());
        bool out = false;
        for (int k = 0; k < n-1; ++k) {
            if (abs(arr[k + 1] - arr[k]) > 1) {
                cout << "NO" << endl;
                out = true;
                break;
            }
        }
        if (out){
            continue;
        }
        cout << "YES" <<endl;
    }
}