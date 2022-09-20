#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>x,pair<int, int>y){
    return (min(2*x.first, x.second) - min(x.first, x.second)) > (min(2*y.first, y.second) - min(y.first, y.second));
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, f;
    cin >> n >> f;
    vector<pair<int, int>> sells(n);
    for (int i = 0; i < n; ++i) {
        cin >> sells[i].first >> sells[i].second;

    }
    sort(sells.begin(), sells.end(),compare);

    for (int i = 0; i < f ; ++i) {
        sells[i].first *= 2;

    }
    long long int gain = 0;
    for (int i = 0; i < n ; ++i) {
        if ( sells[i].second >= sells[i].first){
            gain += sells[i].first;

        } else{
            gain += sells[i].second;
        }

    }
    cout << gain << endl;
}