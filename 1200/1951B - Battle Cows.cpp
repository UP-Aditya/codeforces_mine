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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int x = 0;
        int cw = v[k-1];
        int b = -1;
        int p = 0;
        for(int i=0;i<n;i++){
            if(v[i]>cw){
                b = i;
                break;
            }
        }
        if(b==-1){
            cout << n-1 << '\n';
            continue;
        }
        if(k-1==0 || b==0){
            for(int i=1;i<n;i++){
                if(v[i]<cw) x++;
                else break;
            }
            cout << x << '\n';
            continue;
        }
        if(k-1 < b){
            for(int i=0;i<b;i++){
                if(v[i]<cw) x++;
            }
            cout << x << '\n';
        }
        else{
            int q = 0;
            for(int i=0;i<b;i++){
                if(v[i]<cw) q++;
            }
            int f = 0;
            swap(v[k-1],v[b]);
            for(int i=b;i<k-1;i++){
                if(b>0 && !f){
                    if(v[i-1]<cw) x++;
                    f = 1;
                }
                else if(v[i]<cw) x++;
                else if(v[i]==cw) continue;
                else break;
            }
            if(max(q,x)==q) cout << q-1 << '\n';
            else cout << x << '\n';
        }
        // for(int i=0;i<b;i++){
        //     if(v[i]<cw){
        //         x++;
        //     }
        //     else{
        //         p = max(p,x);
        //         x = 0;
        //     }
        // }
        // cout << p << '\n';

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