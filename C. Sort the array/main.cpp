#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int freq_arr[100000];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n;
    int a, counter = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a ;
        freq_arr[a]++;

    }
    for (int i = 0; counter < n ; ++i) {
        if (freq_arr[i] != 0){
            for (int j = 0; j < freq_arr[i]; ++j) {
                cout << i << " " ;
                counter++;
            }

        }

    }
}