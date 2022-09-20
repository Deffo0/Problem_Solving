#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    double long n, sum = 0;
    cin >> n;
    for(int i = 0; i<n ; ++i){
        int carry;
        cin >> carry;
        sum += carry;
    }
    cout << sum / n;

}