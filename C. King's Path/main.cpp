#include<bits/stdc++.h>
using namespace std;
int dx[2]={1,0},dy[2]={0,1};
map<pair<int,int>,int>mp;
int main(){
    int x0, y0, x1, y1, n;
    cin >> x0 >> y0 >> x1 >> y1 >> n;
    while(n--){
        int r, a, b;
        cin >> r >> a >> b;
        for(int i=a;i<=b;i++)
            mp[pair<int, int>(r,i)]=-1;
    }

    mp[{x0,y0}]=0,mp[{x1,y1}]=-1;
    queue<pair<int,int>>q;

    q.push(pair<int, int>(x0,y0));
    while(not q.empty()){
        pair<int,int> u=q.front();q.pop();
        for(int i=0;i<8;i++){
            pair<int,int> v = pair<int,int>(u.first+dx[i],u.second+dy[i]);
            if(mp[v]==-1)
                mp[v]=mp[u]+1,q.push(v);
        }
    }
    cout << mp[pair<int,int>(x1,y1)] << endl;
}