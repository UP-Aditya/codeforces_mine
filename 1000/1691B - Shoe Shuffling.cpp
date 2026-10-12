#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int f = 0;
        for(int i=0;i<n-1;i++){
            if(v[i]!=v[i+1]){
                f = 1;
                break;
            }
        }
        if(f==0){
            if(n==1){
            cout << -1 << '\n';
            }
            else{
                cout << n << " ";
            for(int i=0;i<n-1;i++){
                cout << (i+1) << " ";
                }
                cout << '\n';
                }
            }

        else{
            map<int,vector<int>> m;
            for(int i=0;i<n;i++) {
                m[v[i]].push_back(i);
            }
            int f1 = 0;
            for(auto &i : m){
                if(i.second.size() < 2){
                    f1 = 1;
                    break;
                }
            }
            if(f1){
                cout << -1 << '\n';
            }
            else{
                vector<int> ans(n);
                for(auto &g : m){
                    vector<int> &idx = g.second;
                    int sz = idx.size();
                    for(int i=0;i<sz;i++){
                        ans[idx[i]] = idx[(i+1)%sz] + 1;
                    }
                }
                for(int i=0;i<n;i++){
                    cout << ans[i] << " ";
                }
                cout << '\n';
            }
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