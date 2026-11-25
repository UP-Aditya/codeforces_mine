#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        int mx=0;
        vector<pair<int,int>> pos;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                if(v[i][j]>mx){
                    mx=v[i][j];
                    pos.clear();
                    pos.push_back({i,j});
                }else if(v[i][j]==mx){
                    pos.push_back({i,j});
                }
            }
        }
        int ans=1e9;
        for(auto [r,c]:pos){
            vector<vector<int>> vv=v;
            for(int j=0;j<m;j++)vv[r][j]--;
            for(int i=0;i<n;i++)if(i!=r)vv[i][c]--;
            int cur=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cur=max(cur,vv[i][j]);
                }
            }
            ans=min(ans,cur);
        }
        cout<<ans<<"\n";
    }
}
