#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

// ouch fr sure

// int f(int idx, int scst, vector<int> &v,vector<vector<int>> &dp){
//     if(idx==0){
//         int np = 0;
//         int p = -1e18;
//         if(scst == 0 || (v[0]!=scst+1 && v[0]!=scst-1)) p = v[0];
//         return max(np,p);
//     }
//     if(dp[idx][scst] != -1) return dp[idx][scst];
//     int np = f(idx-1,scst,v,dp);
//     int p = -1e18;
//     if(scst==0 || (v[idx] != scst+1 && v[idx]!=scst-1))
//         p = v[idx] + f(idx-1,v[idx],v,dp);
//     return dp[idx][scst] = max(np,p);
// }
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> fq(1e5+1,0);
        for(int i=0;i<n;i++){
            cin >> v[i];
            fq[v[i]]++;
        }
        int mx = *max_element(v.begin(),v.end());
        if(mx==0){
            cout << 0 << '\n';
            continue;
        }
        vector<int> dp(mx+1,0);
        dp[1] = fq[1];

        for(int i=2;i<=mx;i++){
            dp[i] = max(dp[i-1],dp[i-2]+i*fq[i]);
        }
        cout << dp[mx];
        // sort(v.begin(),v.end());
        // vector<vector<int>> dp(n,vector<int>(mx+1,-1));
        // cout << f(n-1,0,v,dp);



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