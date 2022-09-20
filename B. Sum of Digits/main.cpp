#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    string n;
    cin >> n;
    int ctr = 0;


    while(n.length() != 1 ){
        unsigned long long int carry = 0;
        for (int i = 0; i < n.length() ; ++i){
            carry += (int) n[i] - 48;
        }
        n = to_string(carry);
        ctr++;
    }
    cout << ctr << endl;

}