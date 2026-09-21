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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        int mx = v[1];
        int x = 0;
        for(int i=1;i<=n;i++){
            mx = max(v[i],mx);
            if(i%2==0){
                if(v[i]<mx){
                    v[i] = mx;
                }
            }
        }
        if(n==2){
            // This idiot case made it wrong!!!
            if(v[2]>v[1]) cout << 0 << '\n';
            else{
                cout << v[1] - v[2] + 1 << '\n';
            }
        }
        else{
        //mx = v[1];
        for(int i=2;i<=n-1;i++){
            // mx = max(mx,v[i]);
            if(i%2==0){
                if(v[i]>v[i-1] && v[i]>v[i+1]) continue;
                else{
                    //if(mx > v[i-1] && mx > v[i+1]) continue;
                    //else{
                        if(v[i] <= v[i-1]){
                            x += v[i-1]-v[i]+1;
                            v[i-1] -= (v[i+1]-v[i]+1);
                        }
                        if(v[i] <= v[i+1]){
                            x += v[i+1]-v[i]+1;
                            v[i+1] -= (v[i+1]-v[i]+1);
                        }
                    //}
                }
            }
        }
        cout << x << '\n';
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