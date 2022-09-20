#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    pair<int, int> input;
    cin >> input.first >> input.second;
    vector<int> arr(input.first);
    vector<pair<string, int>> queries(input.second);

    for (int i = 0; i < input.first; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < input.second; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < input.second; ++i) {
        if (queries[i].first == "lower_bound"){
            if (lower_bound(arr.begin(),arr.end(),queries[i].second) - arr.begin()  == input.first){
                cout << -1 << endl;
            }else{
                cout << arr[lower_bound(arr.begin(),arr.end(),queries[i].second) - arr.begin()] << endl;
            }
        }else if (queries[i].first == "upper_bound"){
            if (upper_bound(arr.begin(),arr.end(),queries[i].second) - arr.begin() == input.first){
                cout << -1 << endl;
            }else{
                cout << arr[upper_bound(arr.begin(),arr.end(),queries[i].second) - arr.begin()] << endl;
            }

        }else if (queries[i].first == "binary_search"){
            if (binary_search(arr.begin(),arr.end(),queries[i].second)){
                cout << "found" << endl;
            }else{
                cout << "not found" << endl;
            }
        }
    }
}