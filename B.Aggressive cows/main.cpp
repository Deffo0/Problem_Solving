#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int rounds ;
    string winner;
    cin >> rounds;
    map<string, int> game;
    for (int i = 0; i < rounds; i++){
        string name;
        int ctr;
        cin >> name >> ctr;
        game[name] += ctr;
        if (i == 0){
            winner = name;
        }else if (game[name] > game[winner]){
            winner = name;
        }
    }
    cout << winner;

}
