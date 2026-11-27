#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n,q;
        cin >> n >> q;
        vector<int> v(n),que(q);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<q;i++) cin >> que[i];
        map<int,int> mp;
        int c = 1;
        vector<pair<int,int>> vv;
        for(int i=0;i<n;i++){
            if(mp.find(v[i])==mp.end()){
                vv.push_back({v[i],c});
                c++;
                mp[v[i]] = 1;
            }
            else c++;
        }
        for(int i=0;i<q;i++){
            int p=0;
            for(int j=0;j<vv.size();j++){
                if(vv[j].first==que[i]){
                    p = vv[j].second;
                    vv[j].second = 1;
                    break;
                }
            }
            for(int k=0;k<vv.size();k++){
                if(vv[k].first!=que[i] && vv[k].second <p) vv[k].second++;
            }
            cout << p << ' ';
        }
        
    }


/*
⠀⠀⠀⠀⠀⠀⣠⠴⠲⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀63⠀⠀⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀⠀⢀⡀
⠠⠞⠙⠱⡆⠀⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆⠀
⠀⠀⠀⣰⠏⠀⠀⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁⠀⠀
⠀⢀⡼⠁⠀⣠⣾⣿⣿⣿⣿⣿⣿⡯⠀⠀⠀⠀⠀⠀
⠀⡞⠀⠀⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄⠀⠀⠀⠀⠀
⢸⡃⠀⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇⠀⠀⠀⠀
⠘⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂⠀⠀⠈⠀⠀⠀⠀
⠀⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠙⠙⠻⠿⠿⠿⠿⠶⠶⠀⠀⠀⠀⠀⠀
*/