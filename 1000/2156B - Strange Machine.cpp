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
        int n,q;
        cin >> n >> q;
        string s;
        cin >> s;
        int fa=0,fb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A') fa = 1;
            else fb = 1;
        }
        int x;
        if(!fa){
            while(q--){
            cin >> x;
            cout << (int)log2(x) + 1 << '\n';
        }
    }
        else if(!fb){
            while(q--){
            cin >> x;
            cout << x << '\n';
        }
        }
        else{
            // TLE ?? lets see ?
            while(q--){
            int tim = 0;
            // int p;
            cin >> x;
            // p = x;
            while(x>0){
            for(int i=0;i<n;i++){
                if(s[i]=='A'){
                    x -= 1;
                }
                else{
                    x = x/2;
                }
                tim++;
                if(x==0) break;
            }
            if(x==0) break;
        }
        cout << tim << '\n';

            // if(x==0) cout << tim << '\n';
            // else{
            //     tim = 0;
            //     // int dif = p-x;
            //     // int r = p/dif;
            //     // tim += r*n;
            //     // if(p%dif==0) cout << tim << '\n';
            //     // else{
            //     //     // int tim2 = 0;
            //     //     for(int i=0;i<n;i++){
            //     //         if(s[i]=='A') x -= 1;
            //     //         else x = x/2;   
            //     //         tim++;
            //     //         if(x==0) break;
            //     //     }
            //     //     cout << tim  << '\n';
            //     // }
            // }

        }
        }
        
    

    }
}



// /*
// ⠀⠀⠀⠀⠀⠀⣠⠴⠲⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀63⠀⠀⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀⠀⢀⡀
// ⠠⠞⠙⠱⡆⠀⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆⠀
// ⠀⠀⠀⣰⠏⠀⠀⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁⠀⠀
// ⠀⢀⡼⠁⠀⣠⣾⣿⣿⣿⣿⣿⣿⡯⠀⠀⠀⠀⠀⠀
// ⠀⡞⠀⠀⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄⠀⠀⠀⠀⠀
// ⢸⡃⠀⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇⠀⠀⠀⠀
// ⠘⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂⠀⠀⠈⠀⠀⠀⠀
// ⠀⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠙⠙⠻⠿⠿⠿⠿⠶⠶⠀⠀⠀⠀⠀⠀
// */