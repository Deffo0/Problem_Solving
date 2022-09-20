#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int input;
    cin >> input;
    stack<int> stack;
    vector<pair<string, int>> queries(input);
    for (int i = 0; i < input; ++i) {
        cin >> queries[i].first;
        if (queries[i].first == "push"){
            cin >> queries[i].second;
        }
    }
    for (int i = 0; i < input; ++i) {
        if (queries[i].first == "top"){
            cout << stack.top() << endl;
        }
        else if (queries[i].first == "pop"){
            stack.pop();
        }
        else if (queries[i].first == "push"){
            stack.push(queries[i].second);
        }
    }

}