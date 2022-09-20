#include <bits/stdc++.h>
using namespace std;
int n, m;
int ctr = 0;
vector<string> arr;
void water(int x, int y)
{
    if (0 > x or x >= n or 0 > y or y >=m ){
        return ;
    }
    if (arr[x][y] == '*'){
        return ;
    }
    if (arr[x][y] == 'x'){
        return ;
    }
    if (arr[x][y] == '.'){
        ctr++;
        arr[x][y] = 'x';
    }

    water(x+1, y);
    water(x-1, y);
    water(x, y+1);
    water(x, y-1);





}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    cin >> n >> m;
    arr = vector<string>(n);
    for (int i = 0; i < n; ++i) {
            cin >> arr[i];

    }
    int a, b;
    cin >> a >> b;
    water(a-1, b-1);
    cout << ctr << endl;
}