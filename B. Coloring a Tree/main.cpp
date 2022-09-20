#include <bits/stdc++.h>
using namespace std;
vector<int> graph[10001];
map<int, int> color;
vector<int> colors(10001);
int steps = 0;

void bfs(int node, int color_no){
    queue<int> container;
    if (colors[node] == color_no){
        return;
    }
    steps++;
    colors[node] = color_no;

    container.push(node);
    while (not container.empty()){
        int carry = container.front();
        container.pop();

        for (int i = 0; i < graph[carry].size(); ++i) {
            container.push(graph[carry][i]);
            colors[graph[carry][i]] = color_no;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n ;


    for (int i = 2; i <= n; ++i) {
        int carry;
        cin >> carry;

        graph[carry].push_back(i);
    }
    for (int i = 1; i <= n; ++i) {
        cin >> color[i];
        bfs(i,color[i]);
    }

    cout << steps <<endl;

}