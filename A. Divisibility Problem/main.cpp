#include <bits/stdc++.h>
using namespace std;
int test;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    cin >> test ;
    for (int i = 0; i < test; ++i) {
        int a, b, d, new_a;
        cin >> a >> b;
        if (a%b == 0){
            new_a = a;
        }else{
            d = a/b;
            new_a = (d+1)*b;
        }

        cout << new_a - a << endl;

    }

}