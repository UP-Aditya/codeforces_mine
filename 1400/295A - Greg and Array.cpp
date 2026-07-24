#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // wanna see Annabella waali gudiyaa ??
    //  Neeche dekhh *~*

        int n,m,k;
        cin >> n >> m >> k;
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        vector<int> l(m+1,0),r(m+1,0),d(m+1,0);
        for(int i=1;i<=m;i++){
            cin >> l[i] >> r[i] >> d[i];
        }
        vector<int> opf(m+2,0);
        for(int i=0;i<k;i++){
            int x,y;
            cin >> x >> y;
            opf[x] += 1;
            opf[y+1] -= 1;
        }
        for(int i=1;i<=m;i++){
            opf[i] += opf[i-1];
        }
        vector<int> diff(n+2,0);
        for(int i=1;i<=m;i++){
            int x = opf[i];
            diff[l[i]] += x*d[i];
            diff[r[i]+1] -= x*d[i];
        }
        for(int i=1;i<=n;i++){
            diff[i] += diff[i-1];
        }
        for(int i=1;i<=n;i++){
            v[i] += diff[i];
        }
        for(int i=1;i<=n;i++){
            cout << v[i] << " ";
        }
        cout << '\n';

    
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