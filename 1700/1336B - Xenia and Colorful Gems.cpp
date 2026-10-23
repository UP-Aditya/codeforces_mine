#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int cal_ans(int x,int y,int z){
    return (x-y)*(x-y)+(y-z)*(y-z)+(z-x)*(z-x);
}

void solve(vector<int>& mid,vector<int>& left,vector<int>& right,int& df){
    for(int x : mid){
        auto it1 = upper_bound(left.begin(),left.end(),x);
        if(it1==left.begin()) continue;
        it1--;
        int y = *it1;
        auto it2 = lower_bound(right.begin(),right.end(),x);
        if(it2 ==right.end()) continue;
        int z = *it2;
        df = min(df,cal_ans(x,y,z));
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        int nr,ng,nb;
        cin >> nr >> ng >> nb;
        vector<int> r(nr),g(ng),b(nb);
        for(int i=0;i<nr;i++) cin >> r[i];
        for(int i=0;i<ng;i++) cin >> g[i];
        for(int i=0;i<nb;i++) cin >> b[i];

        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());

        int df = 9e18; 
        solve(r,g,b,df);
        solve(r,b,g,df);
        solve(g,r,b,df);
        solve(g,b,r,df);
        solve(b,r,g,df);
        solve(b,g,r,df);
        cout << df << '\n';
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