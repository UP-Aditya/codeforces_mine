#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

const int MOD = 1e9+7;
const int MAXN = 2000005;
int fact[MAXN];
int power(int base,int exp){
    int res = 1;
    base %= MOD;
    while(exp>0){
        if(exp%2==1) res = (res*base)%MOD;
        base = (base*base) % MOD;
        exp /= 2;
    }
    return res;
}
int modInverse(int n){
    return power(n,MOD-2);
}
int nCr(int n,int r){
    if(r<0 || r>n) return 0;
    return fact[n]*modInverse(fact[r])%MOD*modInverse(fact[n-r])%MOD;
}

void precompute(){
    fact[0] = 1;
    for(int i=1;i<MAXN;i++){
        fact[i] = (fact[i-1]*i)%MOD;
    }
}

void solve(){
    int n;
    cin >> n;
    int s = 0;
    for(int i=0;i<n;i++){
        s += nCr(n+i-1,i);
    }
    cout << (s*2-n+MOD)%MOD << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int t = 1;
    // cin >> t; 
    while(t--) {
        solve();
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