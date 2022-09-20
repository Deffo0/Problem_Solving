#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int input;
    cin >> input;
    set<int> arr;
    vector<pair<string, int>> queries(input);


    for (int i = 0; i < input; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }
    for (int i = 0; i < input; ++i) {
        if(queries[i].first == "insert"){
            arr.insert(queries[i].second);

        }
        else if (queries[i].first == "lower_bound"){
            if (arr.lower_bound(queries[i].second) == arr.end()){
                cout << -1 << endl;
            }else{
                cout << *arr.lower_bound(queries[i].second)  << endl;
            }
        }else if (queries[i].first == "upper_bound"){
            if (arr.upper_bound(queries[i].second) == arr.end()){
                cout << -1 << endl;
            }else{
                cout << *arr.upper_bound(queries[i].second)  << endl;
            }

        }else if (queries[i].first == "find"){
            if (arr.find(queries[i].second) != arr.end() ){
                cout << "found" << endl;
            }else{
                cout << "not found" << endl;
            }
        }
    }
}
