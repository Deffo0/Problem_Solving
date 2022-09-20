#include <bits/stdc++.h>
using namespace std;
struct triple{
    int first;
    int second;
    int third;
};
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    pair <int, int> input;
    cin >> input.first >> input.second;
    triple queries[input.second];
    vector< long long> arr(input.first);
    vector< long long> diff(input.first + 1);
    fill(diff.begin(), diff.end(), 0);

    for (int i = 0; i < input.first; ++i) {
        cin >> arr[i] ;
        if (i == 0){
            diff[i] = arr[i];
        }else{
            diff[i] = arr[i] - arr [i - 1];
        }
    }
    for (int i = 0; i < input.second ; ++i) {
        cin >> queries[i].first >> queries[i].second >> queries[i].third;
        diff[queries[i].first - 1] += queries[i].third;
        diff[queries[i].second] -= queries[i].third;
    }
    arr[0] = diff[0];
    cout << arr[0] << endl;
    for (int i = 1; i < input.first ; ++i) {
        arr[i] = arr[i - 1] + diff[i];
        cout << (arr[i]) << endl;
    }

}