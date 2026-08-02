#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        map<int,vector<int>> mp;
        for(auto &i : v){
            int x = i;
            for(int j=2;j*j<=x;j++){
                int c = 0;
                if(x%j==0){
                while(x%j==0){
                    c++;
                    x /= j;
                }
                mp[j].push_back(c);
            }
            }
            if(x>1) mp[x].push_back(1);
        }
        int g=1;
        for(auto &i : mp){
            if(i.second.size()==n){
                sort(i.second.begin(),i.second.end());
                int p = *(i.second.begin()+1);
                while(p--){
                    g *= i.first;
                }
            }
            else if(i.second.size()==n-1){
                sort(i.second.begin(),i.second.end());
                int p = *(i.second.begin());
                while(p--){
                    g *= i.first;
                }
            }
        }
        cout << g;
        // for(auto &i : mp){
        //     cout << i.first << " -> ";
        //     for(auto &j : i.second){
        //         cout << j << " ";
        //     }
        //     cout << '\n';
        // }

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