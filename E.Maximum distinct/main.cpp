#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int size, k ;
    cin >> size >> k;
    vector<char> game(size);
    set<char> distinct;
    map<char, int> mapper;
    for (int i = 0; i < size; i++){
        cin >> game[i];

    }

    int s = 0,e = 0, ans = 0;
    while ( s < size and size!=0 and k!=0) {
        while (e < size and (e-s+1) < k){
            distinct.insert(game[e]);
            mapper[game[e]]++;
            e++;
        }
        if ((e-s+1) >= k){
            ans = max(ans, (int)distinct.size());
        }
        if(mapper[game[s]] == 1){
            distinct.erase(game[s]);
        }
        mapper[game[s]]--;
        s++;
    }
    cout << ans << endl;

}
