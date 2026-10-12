#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<pair<int,int>> ans;
        while(v.size()>1){
            bool z=false;
            for(auto &i : v){
                if(i==0){
                    z=true;
                    break;
                }
            }
            int l=0,r=0;
            if(!z){
                l=0;
                r=v.size()-1;
            }
            else{
                bool ok=false;
                for(int i=0;i+1<v.size();i++){
                    if(v[i]==0 && v[i+1]==0){
                        l=i;
                        r=i+1;
                        ok=true;
                        break;
                    }
                }
                if(!ok){
                    for(int i=0;i+1<v.size();i++){
                        if(v[i]==0 || v[i+1]==0){
                            l=i;
                            r=i+1;
                            break;
                        }
                    }
                }
            }
            ans.push_back({l+1,r+1});
            vector<int> f(v.size()+5,0);
            for(int i=l;i<=r;i++){
                if(v[i]<f.size()) f[v[i]]=1;
            }
            int mex=0;
            while(f[mex]) mex++;
            vector<int> nv;
            for(int i=0;i<l;i++) nv.push_back(v[i]);
            nv.push_back(mex);
            for(int i=r+1;i<v.size();i++) nv.push_back(v[i]);
            v=nv;
        }
        cout << ans.size() << '\n';
        for(auto &i :ans){
            cout << i.first <<" "<< i.second << '\n';
        }

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