#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int size, thresold ;
    cin >> size >> thresold;
    vector<int> game(size);
    for (int i = 0; i < size; i++){
        cin >> game[i];

    }
    int s = 0,e = 0, sum = 0, ans = size + 1;
    while ( e < size) {
        while (e < size and sum < thresold){
            sum += game[e++];
        }
        while(sum >= thresold and s < size) {
            ans = min(ans, e - s);
            sum -= game[s++];
        }

    }
    if (ans == size+1){
        cout << -1 << endl;

    }else{
        cout << ans << endl;
    }
}
