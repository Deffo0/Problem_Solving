#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n_stops;
    cin >> n_stops;
    int a[n_stops], b[n_stops], acc[n_stops];
    for (int i = 0; i < n_stops; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    for (int l = 0; l < n_stops; l++) {
        if (l != 0) {
            acc[l] = acc[l - 1] + (b[l] - a[l]);
        } else {
            acc[l] = (b[l] - a[l]);
        }
    }


    vector<int> accumlator(acc, acc + n_stops);
    cout <<"\n" << *max_element(accumlator.begin(), accumlator.end());
    return 0;
}
