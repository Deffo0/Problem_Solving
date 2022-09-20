#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    vector<vector<int>> subsets((1 << size));
    int snum = 0;
    while(snum<(1 << size)){
        for(int i=0;i<size;++i){

            if((snum&(1<<i))!=0){
                subsets[snum].push_back(arr[i]);
            }
        }

        ++snum;
    }
    sort(subsets.begin(), subsets.end());
    for (int i = 0; i < (1 << size) ; ++i) {
        for (int j = 0; j < subsets[i].size(); ++j) {
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }
}
