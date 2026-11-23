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
        int a,b,c,m;
        cin >> a >> b >> c >> m;
        int ai = m/a,bi=m/b,ci=m/c;
        int af = 0,bf=0,cf=0;
        int cabc = lcm(a,b);
        cabc = lcm(cabc,c);
        int ans = 0;
        ans += m/cabc;
        int o12 = lcm(a,b);
        int o13 = lcm(a,c);
        int o23 = lcm(b,c);
        o12 = m/o12;
        o13 = m/o13;
        o23 = m/o23;

        af += 3*(o12-ans);
        bf += 3*(o12-ans);

        bf += 3*(o23-ans);
        cf += 3*(o23-ans);

        af += 3*(o13-ans);
        cf += 3*(o13-ans);

        af += ans*2;
        bf += ans*2;
        cf += ans*2;

        af += (ai-o12-o13+ans)*6;
        bf += (bi-o23-o12+ans)*6;
        cf += (ci-o13-o23+ans)*6;
        
        cout << af << " " << bf << " " << cf << '\n';
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