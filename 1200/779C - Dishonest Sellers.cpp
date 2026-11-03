#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin >> n >> k;
    vector<int> v1(n),v2(n);

    for(int i=0;i<n;i++) cin >> v1[i];
    for(int i=0;i<n;i++) cin >> v2[i];

    vector<pair<int,int>> p,pp;
    
    for(int i=0;i<n;i++){
        int d = v1[i]-v2[i];
        if(d<=0) p.push_back({d,i});
        else pp.push_back({d,i});
    }
    sort(pp.begin(), pp.end());
    int s=0,df=p.size();
    for(auto &i : p) s += v1[i.second];
    int x = 0;
    for(auto &i : pp){
        if(df >= k) break;
        s += v1[i.second];
        df++; x++;
    }
    int f = 0;
    for(auto &i : pp){
        if(f++ < x) continue;
        s += v2[i.second];
    }
    cout << s << '\n';
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