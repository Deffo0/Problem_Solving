#include <bits/stdc++.h>
using namespace std;

bool compare(int x,int y){
    return x > y;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, length;
    cin >> n >> length;
    vector<int> buckets(n);
    for (int i = 0; i < n; ++i) {
        cin >> buckets[i];

    }
    sort(buckets.begin(), buckets.end(),compare);

    for (int i = 0; i < n ; ++i) {
        if (length % buckets[i] == 0){
            cout << length / buckets[i] << endl;
            break;
        }

    }

}