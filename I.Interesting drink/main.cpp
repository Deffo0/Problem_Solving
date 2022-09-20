#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int shops, days;
    cin >> shops;
    vector<int> arr(shops);
    for (int i = 0; i < shops; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cin >> days;
    vector<int> coins(days);
    for (int i = 0; i < days; ++i) {
        cin >> coins[i];
    }
    for (int i = 0; i < days; ++i) {
        cout << upper_bound(arr.begin(), arr.end(), coins[i]) - arr.begin() << endl;

    }


}