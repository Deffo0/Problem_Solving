#include <bits/stdc++.h>
using namespace std;
vector<int> graph[2001];
int levels[2001];

int bfs(int node){
    int h;
    queue<int> container;
    container.push(node);
    while (not container.empty()){
        int carry = container.front();
        container.pop();

        for (int i = 0; i < graph[carry].size(); ++i) {
            container.push(graph[carry][i]);
            h = levels[graph[carry][i]] = levels[carry] + 1;
        }
    }
    return h;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n ;


    for (int i = 1; i <= n; ++i) {
        int carry;
        cin >> carry;
        if (carry == -1){
            continue;
        }
        graph[carry].push_back(i);
    }
    int maximum = 0;
    for (int i = 1; i <= n; ++i) {
        maximum = max(bfs(i), maximum);
    }
    cout << maximum + 1 << endl;


}