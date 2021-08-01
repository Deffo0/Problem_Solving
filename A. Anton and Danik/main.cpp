#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, A, D;
    cin >> n;
    char arr[n];
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    A = std::count(arr,arr+n,'A');
    D = std::count(arr,arr+n,'D');
    if (A>D){
        cout << "Anton";
    }else if(A<D){
        cout << "Danik" ;
    }else{
        cout << "Friendship" ;
    }

    return 0;
}
