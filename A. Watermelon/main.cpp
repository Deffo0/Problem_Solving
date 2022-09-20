#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n;
    if ( n % 2 == 0 and n != 2 and n != 0){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}