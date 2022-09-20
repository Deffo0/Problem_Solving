#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int queries, number ;
    cin >> number >> queries ;

    for (int i = 0; i < queries; i++){
        int a;
        cin >> a ;
        if (a == 1){
            int ctr = 0;
            for (int j = number; ctr < 32; j >>= 1, ctr++) {
                if ((j & 1) == 0){
                    number |= (1 << ctr);
                    break;
                }
            }
            cout << number << endl;
        }else if (a == 2){
            number &= (number - 1);
            cout << number <<  endl;

        }else if (a == 3){
            int ctr = 0;
            for (int j = number; ctr < 32; j >>= 1, ctr++) {
                if ((j & 1) == 1){
                    break;
                }
                number |= (1 << ctr);
            }
            cout << number <<  endl;
        }else if (a == 4){
            int ctr = 0;
            for (int j = number; ctr < 32; j >>= 1, ctr++) {
                if ((j & 1) == 0){
                    break;
                }
                number &= ~(1 << ctr);
            }
            cout << number <<  endl;

        }else if (a == 5){
            if ((number & (number - 1)) == 0 and number != 0){
                cout << "is power of two" << endl;
            }else{
                cout << "not power of two" << endl;
            }

        }
    }

}
