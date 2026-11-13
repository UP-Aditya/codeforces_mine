#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int mod = 998244353;
int N = 1e6;
vector<int> fact(N+1),invfact(N+1);
int power(int a,int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b >>= 1;
    }
    return ans;
}
void pre(){
    fact[0] = 1;
    for(int i=1;i<=N;i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    invfact[N] = power(fact[N],mod-2);
    for(int i=N-1;i>=0;i--){
        invfact[i] = (invfact[i+1]*(i+1))%mod;
    }
}
int ncr(int n,int r){
    if(r<0 || r>n) return 0;
    return (((fact[n]*invfact[r])%mod)*invfact[n-r])%mod;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pre();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c=1;
        int df = 1;
        int p = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) c++;
            else{
                p += c-1;
                df = (df*c)%mod;
                c = 1;
            }
        }
        p += c-1;
        df = (df*c)%mod;
        df = (df*fact[p])%mod;

        cout << p << " " << df << '\n';

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