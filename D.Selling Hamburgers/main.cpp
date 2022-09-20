#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int test_cases, customers, m, result = 0;
    cin >> test_cases;
    for (int i = 0; i < test_cases; ++i) {
        cin >> customers;
        vector<int> money(customers);
        for (int j = 0; j < customers; ++j) {
            cin >> money[j];
            if (j == 0){
                m = money[j];
                result = m;
            }else if(money[j] >= m){
                result += m;
            }
        }
        cout << result << endl;
    }

}