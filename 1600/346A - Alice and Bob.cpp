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
        int n;
        cin >> n;
        vector<int> v(n);
        int g = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            g = gcd(g,v[i]);
        }
        sort(v.begin(),v.end());
        int x = v[n-1]/g - n;
        if(x%2) cout << "Alice\n";
        else cout << "Bob\n";
        // cout << g << endl;
        // int d = v[0];
        // int f = 0;
        // for(int i=1;i<n;i++){
        //     if(v[i]-v[i-1] != d){
        //         f = 1;
        //         break;
        //     }
        // }
        // if(!f){
        //     cout << "Bob\n";
        //     return 0;
        // }
        // else{
        //     int fe=0,fo=0;
        //     for(auto &i : v){
        //         if(i%2) fo = 1;
        //         else fe = 1;
        //     }
        //     if(fo && fe){
        //         int x = v[n-1]-n;
        //         if(x%2) cout << "Alice\n";
        //         else cout << "Bob\n";
        //     }
        //     else if(fe){
        //         // int p = v[n-1];
        //         int x = v[n-1]/2- n;
        //         if(x%2) cout << "Alice\n";
        //         else cout << "Bob\n";
        //     }
        //     else{
        //         int x = (v[n-1]+1)/2 - n;
        //         if(x%2) cout << "Alice\n";
        //         else cout << "Bob\n";
        //     }
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