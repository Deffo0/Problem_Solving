#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int queries, number ;
    cin >> queries >> number ;

    for (int i = 0; i < queries; i++){
        int a, b;
        cin >> a ;

        if (a == 1){
            cin >> b;
            cout << (number |= b) << endl;
        }else if (a == 2){
            cin >> b;
            cout << (number &= b) << endl;
        }else if (a == 3){
            cin >> b;
            cout << (number ^= b) << endl;
        }else if (a == 4){
            number = ~number;
            cout << (number) << endl;

        }
    }

}
