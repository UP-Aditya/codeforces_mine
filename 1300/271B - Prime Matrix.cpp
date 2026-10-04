#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat
const int N = 1e7;
bool prime[N];  
int nxt[N];
void pre(){
for(int i=0;i<N;i++){
    prime[i] = 1;
}
prime[0] = prime[1] = 0;
for(int i=2;i*i<N;i++){
    if(prime[i]){
        for(int j=1LL*i*i;j<N;j+=i){
            prime[j] = 0;
        }
    }
}
// distance till next prime
int last_prime = N - 1;
    for(int i = N - 1; i >= 0; i--){
        if(prime[i]){
            last_prime = i;
        }
        nxt[i] = last_prime;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    int t = 1;
    // cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> v(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> v[i][j];
            }
        }
        int pm1 = 1e18,pm2=1e18;
        for(int i=0;i<n;i++){
            int c = 0;
            for(int j=0;j<m;j++){
                c += abs(v[i][j]-nxt[v[i][j]]);
                // if(!(prime[v[i][j]])){
                //     for(int k=v[i][j]+1;k<=1e6;k++){
                //         if(prime[k]){
                //             c += abs(v[i][j]-k);
                //             break;
                //         }
                //     }
                // }
            }
            pm1 = min(pm1,c);
        }
        for(int i=0;i<m;i++){
            int c = 0;
            for(int j=0;j<n;j++){
                c += abs(v[j][i]-nxt[v[j][i]]);
                // if(!(prime[v[j][i]])){
                //     for(int k=v[j][i]+1;k<=1e6;k++){
                //         if(prime[k]){
                //             c += abs(v[j][i]-k);
                //             break;
                //         }
                //     }
                // }
            }
            pm2 = min(pm2,c);
        }
        cout << min(pm1,pm2);


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