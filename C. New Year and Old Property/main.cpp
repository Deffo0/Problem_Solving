#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int64_t a, b;
    int counter = 0;
    cin >> a >> b;
    for (int64_t i = a; i <= b; ++i) {
        int64_t size = 0, carry = i;
        for (int64_t j = carry; j != 0; j >>= 1) {
           size++;
        }
        cout << size << endl;
        int ctr = 0, zeroes = 0;
        for (int64_t j = carry; ctr < 64; j >>= 1, ctr++) {
            if ((j & 1) == 0){
                carry |= (1 << ctr);
                zeroes ++;
                break;
            }
        }
        int ctr2 = 0;
        for (int64_t j = carry; ctr2 < size; j >>= 1, ctr2++) {
            if ((j & 1) == 0){
                zeroes++;
            }
        }
        if (zeroes == 1){
            counter++;
        }
    }
    cout << counter << endl;
}
