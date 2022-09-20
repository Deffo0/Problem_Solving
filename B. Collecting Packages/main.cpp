#include<bits/stdc++.h>
using namespace std;
int dx[2]={1,0},dy[2]={0,1};
map<pair<int,int>,pair<string,int>>mp;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int packages = n;
        while(packages--){
            int a, b;
            cin >> a >> b;
            mp[pair<int, int>(a,b)] = pair<string , int>("p",0);
        }

        queue<pair<int,int>>q;

        q.push(pair<int, int>(0,0));
        mp[pair<int, int>(0,0)] = pair<string , int>("",0);
        while(not q.empty()){
            pair<int,int> u=q.front();q.pop();
            for(int i=0;i<2;i++){
                pair<int,int> v = pair<int,int>(u.first+dx[i],u.second+dy[i]);
                if(v.first > 1000 or v.second > 1000){
                    continue;
                }
                if (mp.find(v) != mp.end()){
                    continue;
                }

                if(mp[v].first == "p" ){
                    mp[v].second=mp[u].second+1;
                }
                if(i == 1){
                    mp[v].first=mp[u].first+"U";
                }else if( i == 0){
                    mp[v].first=mp[u].first+"R";
                }
                if (mp[v].second == n){
                    cout << "YES" << endl;
                    cout << mp[v].first << endl;
                    return 0;
                }
                q.push(v);
            }
        }
        cout << "NO" << endl;
    }

}