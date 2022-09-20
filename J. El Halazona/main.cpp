#include <bits/stdc++.h>
using namespace std;
int n;
int ctr = 0;
vector<vector<int>> arr;
bool valid(int x ,int y){
    if (0 > x or x >= n or 0 > y or y >=n ){
        return false;
    }else{
        return true;
    }
}
void halzona(int x, int y)
{
    if (not valid(x, y)){
        return ;
    }
    if (ctr==4){
        cout << arr[x][y] << endl;
        ctr = 0;
    }else{
        cout << arr[x][y] << " ";
        ctr++;

    }
    int minimum = 1000000000;
    int a,b;
    if (valid(x+1, y)){
        if ( 0 < (arr[x+1][y] - arr[x][y]) and (arr[x+1][y] - arr[x][y]) < minimum){
            minimum = arr[x+1][y] - arr[x][y];
            a = x + 1;
            b = y;
        }
    }
    if (valid(x-1, y)){
        if ( 0 < (arr[x-1][y] - arr[x][y]) and (arr[x-1][y] - arr[x][y]) < minimum){
            minimum = arr[x-1][y] - arr[x][y];
            a = x - 1;
            b = y;
        }
    }if (valid(x, y+1)){
        if ( 0 < (arr[x][y+1] - arr[x][y]) and (arr[x][y+1] - arr[x][y]) < minimum){
            minimum = arr[x][y+1] - arr[x][y];
            a = x;
            b = y + 1;
        }
    }if (valid(x, y-1)){
        if ( 0 < (arr[x][y-1] - arr[x][y]) and (arr[x][y-1] - arr[x][y]) < minimum){
            minimum = arr[x][y-1] - arr[x][y];
            a = x;
            b = y - 1;
        }
    }
    halzona(a, b);








}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    cin >> n ;
    int minimum = 1000000000;
    int a,b;
    arr = vector<vector<int>>(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int carry;
            cin >> carry;
            if (carry < minimum){
                minimum = carry;
                a = i;
                b = j;
            }
            arr[i].push_back(carry);
        }
    }


    halzona(a, b);

}