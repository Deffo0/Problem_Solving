#include <bits/stdc++.h>
using namespace std;


long long power(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    cout << power(n, m, 1000000007);
}