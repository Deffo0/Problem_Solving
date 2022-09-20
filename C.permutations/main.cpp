#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    pair<int, int> input;
    cin >> input.first >> input.second;
    vector<char> arr(input.first);
    vector<pair<string, int>> queries(input.second);

    for (int i = 0; i < input.first; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < input.second; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }

    for (int i = 0; i < input.second; ++i) {
        if (queries[i].first == "prev_permutation"){
            for (int j = 0; j < queries[i].second; ++j) {
                prev_permutation(arr.begin(), arr.end());
            }
            for (int j = 0; j < input.first; ++j) {
                cout << arr[j];
            }
            cout << endl;
        }else if (queries[i].first == "next_permutation"){
            for (int j = 0; j < queries[i].second; ++j) {
                next_permutation(arr.begin(), arr.end());
            }
            for (int j = 0; j < input.first; ++j) {
                cout << arr[j];
            }
            cout << endl;
        }
    }
}