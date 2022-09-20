#include <bits/stdc++.h>
using namespace std;
vector<int> graph[101];
vector<int> levels(101);

int bfs(int node){
    int h;
    fill(levels.begin(), levels.end(), -1);
    queue<int> container;
    container.push(node);
    levels[node] = 0;
    while (not container.empty()){
        int carry = container.front();
        container.pop();

        for (int i = 0; i < graph[carry].size(); ++i) {
            if (levels[graph[carry][i]] == -1){
                container.push(graph[carry][i]);
                h = levels[graph[carry][i]] = levels[carry] + 1;
            }

        }
    }
    return h;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, m;
    cin >> n >> m;


    for (int i = 1; i <= m; ++i) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);

    }
    int maximum = 0;
    for (int i = 1; i <= n; ++i) {
        maximum = max(bfs(i), maximum);
    }

    cout << maximum + 1 << endl;
    cout << n - (floor(n / (maximum + 1))*(maximum + 1)) << endl;


}