#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int f = 0;
        for(int i=1;i<n-1;i++){
            if(v[i-1]<v[i] && v[i]>v[i+1]){
                f = 1;
                cout << "YES\n";
                cout << i << " " << i+1 << " " << i+2 << '\n';
                break;
            }
            else continue;
        }
        if(f==0) cout << "NO\n";


        // int f = 0,f1 = 0;
        // int mxx = -1;
        // int  p,q,r;
        // for(int i=1;i<n-1;i++){
        //     if(v[i]>mxx){
        //         mxx = v[i];
        //         p = i;
        //     }
        // }
        // for(int i=0;i<p;i++){
        //     if(v[i]<v[p]){
        //         f = 1;
        //         q = i+1;
        //         break;
        //     }
        // }
        // for(int i=p+1;i<n;i++){
        //     if(v[i]<v[p]){
        //         f1 = 1;
        //         r = i+1;
        //         break;
        //     }
        // }
        // if(f==1 && f1==1){
        //     cout << "YES\n";
        //     cout << q << " " << p+1 << " " << r << '\n';
        // }
        // else{
        //     cout << "NO\n";
        // }

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