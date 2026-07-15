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
        int n,k;
        cin >> n >> k;
        vector<int> a(k),b(n);
        for(int i=0;i<k;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        int op= 0;
        map<int,int> mp,mp1;
        for(auto &i : b) mp[i]++;
        for(auto &i : a) mp1[i]++;
        vector<int> o;
        while(1){
            int f = 0;
            for(int i=0;i<n;i++){
                if(b[i]<k+1){
                    if(b[i]==k || mp[b[i]+1]<a[b[i]]){
                        mp[b[i]]--;
                        b[i]++;
                        mp[b[i]]++;
                        op++;
                        o.push_back(i+1);
                        f = 1;
                        break; 
                    }
                }
            }
            if(!f) break;
        }
        // if(x>1000) cout << -1 << '\n';
        // else{
        //     for(int i=n-1;i>=k;i++){
        //         if(b[i]<k+1){
        //             int r = k+1-b[i];
        //             while(r--){
        //                 op++;
        //                 o.push_back(i+1);
        //                 mp2[b[i]]--;
        //                 b[i]++;
        //                 mp2[b[i]]++;
        //             }
        //         }
        //     }
        int ff = 1;
        if(op>1000) cout << -1 << '\n';
        else{
            cout << op << '\n';
            for(auto &i : o){
                cout << i << ' ';
            }
            cout << '\n';
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