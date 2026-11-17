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
        int d1 = v[0];
        int d2 = v[1];
        for(int i=2;i<n;i+=2){
            d1 = gcd(d1,v[i]);
        }
        for(int i=3;i<n;i+=2){
            d2 = gcd(d2,v[i]);
        }
        int f1 = 0;
        for(int i=1;i<n;i+=2){
            if(v[i]%d1==0){
                f1 = 1;
                break;
            }
        }
        if(f1==0) cout << d1 << '\n';
        else if(f1==1){
            int f2 = 0;
            for(int i=0;i<n;i+=2){
                if(v[i]%d2==0){
                    f2=1;
                    break;
                }
            }
            if(f2==0) cout << d2 << '\n';
            else cout << 0 << '\n';
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