#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int x;
    cin >> x;
    bitset<32> bacteria(x);
    cout << bacteria.count() << endl;
}
