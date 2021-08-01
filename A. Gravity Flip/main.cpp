#include <iostream>
using namespace  std;
int main() {
    int n_col, i, j, temp;
    cin >> n_col;
    int arr[n_col];
    for( i = 0 ; i < n_col ; i++ ){
        cin >> arr[i];
    }
    for(i = 0 ; i < n_col ; i++){
        for(j = 0 ; j < n_col - 1 - i ; j++ ){
         if(arr[j] > arr[j+1])   {
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
         }
        }
    }
    for( i = 0 ; i < n_col ; i++ ) {
        cout << arr[i] << " ";
    }
    return 0;
}
