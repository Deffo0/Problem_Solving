#include <iostream>
#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

    int n, counter = 1, t = 0;
    cin >> n;
    deque<int> arr;
    for (int j = 0; j < n; ++j) {
        int a;
        cin >> a;
        arr.push_back(a);

    }
    sort(arr.begin(), arr.end());
    t = arr.front();
    arr.pop_front();
    for (int k = 0; k < n - 1; ++k) {

        if (arr.front() >= t) {
            t += arr.front();
            arr.pop_front();
            counter++;
        }else{
            arr.push_back(arr.front());
            arr.pop_front();
        }
    }
    cout <<  counter <<endl;

}