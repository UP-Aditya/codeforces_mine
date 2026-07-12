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
        int n,c;
        cin >> n >> c;
        int df = 0;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int f = 0;
        int m = 0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                m = 0;
                break;
            }
            else
            m += a[i]-b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                f = 1;
                break;
            }
        }
        if(!f){
            cout << 0 << '\n';
        }
        else{
            f = 0;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    f = 1;
                    break;
                }
            }
            if(!f){
                cout << c << '\n';
            }
            else{
                f = 0;
                for(int i=0;i<n;i++){
                    if(a[i]<b[i]){
                        f = 1;
                        break;
                    }
                }
                if(f) cout << -1 << '\n';
                else{
                    f = 0;
                    for(int i=0;i<n;i++) f += a[i]-b[i];
                    if(m)
                    cout << min(m,f+c) << '\n';
                    else cout << f+c << '\n';
                }
            }
        }



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