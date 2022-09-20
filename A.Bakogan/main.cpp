#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    char input;
    cin >> input;
    if((int)input == 122){
        cout << (char(97));
    }else{
        cout << (char)((int)input + 1);
    }
}