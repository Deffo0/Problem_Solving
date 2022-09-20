#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum = 0;
    for(int  i = 0;i < n;++i) cin>>a[i], sum+= a[i];
    if(sum%3!=0){
        cout<<0;
        return 0;
    }
    ll ans = 0,freq = 0;
    ll part_sum = 0;
    for(int i = 0;i < n - 1;++i){
        part_sum += a[i];
        if(part_sum == 2 * (sum/3)) ans+= freq;
        if(part_sum == sum/3) freq++;
    }
    cout<<ans;
}