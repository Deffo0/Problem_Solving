#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<ll, ll>> dragons;

ll get_cost(ll a , ll input){
    ll res = 0;
    for (ll i =0;i <input; ++i){
        res += abs((dragons[i].first-a))* dragons[i].second;
    }
    return res;
}

ll find_ternary( ll input){
    ll st = 0 , end = 1e5;
    ll ans = 1e18;

    for (int i =0;i < 50; ++i){
        ll md1 = st + (end - st)/3;
        ll md2 = end - (end - st)/3;
        ll res_1 = get_cost(md1, input);
        ll res_2 = get_cost(md2, input);

        if (res_1 > res_2){
            st = md1;
        }
        else{
            end = md2;
        }
        ll res = min (res_1 , res_2);
        ans = min (ans , res);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll input;
    cin >> input;
    dragons = vector<pair<ll, ll>>(input);
    for (ll i = 0; i < input; ++i) {
        cin >> dragons[i].first ;
    }
    for (ll i = 0; i < input; ++i) {
        cin >> dragons[i].second ;
    }
    ll res = find_ternary(input);
    cout << res << endl;
}