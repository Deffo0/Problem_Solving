#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    string x;
    long long counter = 1;
    cin >> x;
    vector<int> freq(63*63);
    fill(freq.begin(), freq.end(), 0);
    for (int i = 0; i < 64; ++i) {
        for (int j = 0; j < 64; ++j) {
            freq[i&j]++;
        }
    }
    for (int i = 0; i < x.size(); ++i) {
        int value;
        if (x[i]>='0' and x[i] <='9' ){
            value = x[i] - '0';
        } else if (x[i]>='A' and x[i] <='Z'){
            value = x[i] - 'A' + 10;

        } else if (x[i]>='a' and x[i] <='z'){
            value = x[i] - 'a' + 36;

        } else if (x[i] == '-'){
            value = 62;

        }else if (x[i] == '_'){
            value = 63;

        }
        counter *= freq[value];
        counter %= llround(1e9+7);

    }
    cout << counter <<endl;
}
