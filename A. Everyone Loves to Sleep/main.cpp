#include <bits/stdc++.h>
using namespace std;
int test;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    cin >> test ;
    for (int i = 0; i < test; ++i) {
        int n, h, m, start_time, sleep_time = 10000;
        cin >> n >> h >> m;
        start_time = h * 60 + m;
        for (int j = 0; j < n; ++j) {
            int h2, m2, time;
            cin >> h2 >> m2;
            time = h2 * 60 + m2;
            if (time < start_time) {
                time += 24 * 60;
            }
            sleep_time = min(sleep_time, time - start_time);
        }
        cout << sleep_time/60 << " " << sleep_time%60 << endl;
    }
}