#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int queries, number ;
    cin >> queries >> number ;

    for (int i = 0; i < queries; i++){
        int a, b;
        cin >> a ;
        cin >> b;
        if (a == 1){
            cout << ((number >> b) & 1) << endl;
        }else if (a == 2){
            number |= (1 << b);
            cout << number <<  endl;
        }else if (a == 3){
            number &= ~(1 << b);
            cout << number <<  endl;
        }else if (a == 4){
            number ^= (1 << b);
            cout << number <<  endl;

        }
    }

}
