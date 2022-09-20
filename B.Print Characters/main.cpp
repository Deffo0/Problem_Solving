#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int input;
    cin >> input;
    vector<string> arr{"q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m"};
    for (int i = 0; i < input; ++i) {
        if (input % 2 !=0 ){
            for (int j = 0; j < input; ++j) {
                cout << arr[i] << " ";

            }
            return 0;
        }else{
            for (int j = 0; j < input - 1; ++j) {
                cout << arr[i] << " ";

            }
            cout << arr[i + 1];
            return 0;
        }

    }


}