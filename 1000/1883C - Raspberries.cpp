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
        int n,k;
        cin >> n >> k;
        int f = 0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]%k==0){
                f = 1;
            }
        }
        if(f==1) cout << 0 << '\n';
        else if(k==4){
            int c1=0,c2=0,c3=0;
            int c = 1;
            for(int i=0;i<n;i++){
                if(v[i]%k==1) c1++;
                else if(v[i]%k==2) c2++;
                else if(v[i]%k==3) c3++;
            }
            if(c2>=2) cout << 0 << '\n';
            else if(c3>=1) cout << 1 << '\n';
            else if(c1>=1 && c2>=1) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
        else{
            int  p = INT_MAX;
            for(int i=0;i<n;i++){
                p = min(p,k - v[i]%k);
            }
            cout << p << '\n';
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