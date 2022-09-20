#include <bits/stdc++.h>
using namespace std;
set<int> graph[100005];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, m, max_sum = -1, max_color;
    map<int, int> color;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        int carry;
        cin >> carry;
        color[i] = carry;
    }
    while (m--) {
        int a, b;
        cin >> a >> b;
        if (color[a] == color[b]){
            continue;
        }
        graph[color[a]].insert(color[b]);
        graph[color[b]].insert(color[a]);


    }
    for (int i = 1; i <= n; ++i) {
        int variety = graph[color[i]].size();

        if (variety > max_sum or (variety == max_sum and color[i] < max_color)){
            max_sum = variety;
            max_color = color[i];
        }
    }
    cout << max_color << endl;

}