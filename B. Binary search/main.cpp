#include <bits/stdc++.h>
using namespace std;


void binary(int start, int end, int target, vector<int>arr){
    if (start > end){ cout << -1 << endl; return;}
    else{
        int mid = (start + end) / 2;
        if(arr[mid] == target){cout << mid + 1 << endl; return;}
        if (arr[mid] > target){
            binary(start, mid - 1, target, arr);
        }else{
            binary(mid + 1, end, target, arr);    }

    }

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int carry;
        cin >> carry;
        if (binary_search(arr.begin(), arr.end(), carry)){
            cout << lower_bound(arr.begin(), arr.end(), carry) - arr.begin() + 1 << endl;

        }else {
            cout << -1 << endl;
        }
    }
}