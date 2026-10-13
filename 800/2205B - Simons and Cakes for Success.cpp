#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

const int MAXN = 100000+5;
vector<int> pr;
vector<int> vis(MAXN);
void init(int n=32000){
    for(int i=2;i<=n;i++){
        if(!vis[i]) pr.push_back(i);
        for(auto j : pr){
            if(i*j > n) break;
            vis[i*j] = 1;
            if(i%j== 0) break;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    init();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 1;
        for(auto p : pr){
            if(p*p > n) break;
            if(n%p == 0){
                ans *= p;
                while(n%p==0){
                    n /= p;
                }
            }
        }
        if(n>1) ans *= n;
        cout << ans << '\n';
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