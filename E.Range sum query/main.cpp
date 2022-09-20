#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    pair <int, int> input;
    cin >> input.first >> input.second;
    pair <int, int> queries[input.second];
    vector< long long> cum_arr(input.first + 1);
    cum_arr[0] = 0;
    for (int i = 1; i < input.first + 1; ++i) {
        cin >> cum_arr[i] ;
        cum_arr[i] += cum_arr[i - 1];

    }
    for (int i = 0; i < input.second ; ++i) {
        cin >> queries[i].first >> queries[i].second;
        if (queries[i].first != 1){
            cout << (cum_arr[queries[i].second] - cum_arr[queries[i].first - 1]) << endl;
        } else{
            cout << cum_arr[queries[i].second] << endl;
        }

    }

}