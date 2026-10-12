#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << endl << 1;
            return 0;
        }
        vector<int> v(n+2,0);
        v[2] = 1;
        v[3] = 1;
        int c = 2;
        int x = 0;
        for(int i=2;i<=n+1;i++){
            int f = 0;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    f = 1;
                }
            }
            if(f)v[i] = 2;
            else{
                x++;
                v[i] = 1;
            }
            f= 0;
        }
        if(n==2) cout << 1 << '\n';
        else
        cout << 2 << '\n';
        for(int i=2;i<n+2;i++){
            cout << v[i] << " ";
        }
        cout << '\n';
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