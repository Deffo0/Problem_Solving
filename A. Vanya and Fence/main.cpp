#include <iostream>
using namespace std;
int main() {
    int n, h, i, tot = 0;
    cin >> n >> h ;
    int arr[n] ;
    for(i=0;i<n;i++){
        cin >> arr[i];
        if ( arr[i] > h){
            tot+=2;
        }else{
            tot++;
        }
    }
    cout << tot ;
    return 0;
}
