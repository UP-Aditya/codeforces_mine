#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k>=n){
            cout << -1 << '\n';
            return 0;
        }
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i] = i+1;
        }
        int p = n-k;
        if(p%2){
            int x= p/2;
            int i=1;
            while(x--){
                swap(v[i],v[i+1]);
                i += 2;
            }
        }
        else{
            int x = p/2;
            int i=0;
            while(x--){
                swap(v[i],v[i+1]);
                i += 2;
            }
        }
        // for(int i=0;i<n-k;i++){
        //     v[i] = i+1;
        // }
        // for(int i=n-1;i>=n-k;i--){
        //     v[i] = i+1;
        // }

        // int p = n-k-1;
        // int x = 0;
        // if(p%2==0){
        //     x=1;
        // }
        // int i=x;
        // int jj = p/2;
        // while(jj--){
        //     swap(v[i],v[i+1]);
        //     i += 2;
        // }
       
        for(auto &i : v) cout << i << " ";
        cout << endl;

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