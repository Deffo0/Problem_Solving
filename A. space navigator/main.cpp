#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        int px, py;
        string move;
        cin >> px >> py >> move;
        int u = 0, d = 0, r = 0, l = 0;
        for (int j = 0; j < move.size(); j++) {
            if (move[j] == 'U') {
                u++;
            } else if (move[j] == 'D') {
                d++;
            } else if (move[j] == 'R') {
                r++;
            } else if (move[j] == 'L') {
                l++;
            }

        }
        if (((px >= 0 and px <= r) or (px < 0 and px >= -1*l)) and ((py >= 0 and py <= u) or (py < 0 and py >= -1*d))) {
            cout << "YES" << endl;

        } else {
            cout << "NO" << endl;

        }

    }

}