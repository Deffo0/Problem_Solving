#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int max = 0;
    for (int i=0; i<2; i++){
        int a;
        cin >> a;
        if (a > max){
            max = a;
        }
    }
    int result;
    result = 6 - max + 1;
    if (result == 0){
        cout << "0/1";
    }
    else if (gcd(result, 6) == 1){
        cout << result << "/6";
    }else{
        cout << result/gcd(result, 6) << "/" << 6/gcd(result, 6);
    }
    return 0;
}
