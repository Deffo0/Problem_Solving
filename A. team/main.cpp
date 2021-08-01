#include <iostream>
using namespace std;
int main() {
    int n, arr[3], prob=0,i,j,count;
    cin >> n;
    for( i = 0 ; i < n ; i++){
        count = 0;
        for( j = 0 ; j < 3 ; j++) {
            cin >> arr[j];
            if (arr[j] == 1) {
                count++;
            }
        }
        if(count >= 2){
            prob++;
        }

    }
    cout << prob;
    return 0;
}
