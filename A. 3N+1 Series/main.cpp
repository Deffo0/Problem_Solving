#include <bits/stdc++.h>
using namespace std;

int len = 1;
int n;
void series(int i){
    if(i == 1){return;}
    if (i % 2 == 0){
        series(i/2);len++;
    }else{
        series(3*i+1);len++;
    }

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

    cin >> n;
    series(n);
    cout << len;
}