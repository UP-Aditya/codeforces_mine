#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n,a,b;
        cin >> n >> a >> b;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int i = 0,j=n-1;
        int cost = 0;
        int mn = min(a,b);
        int f = 0;
        while(i<=j){
            if(v[i] != v[j] && v[i] != 2 && v[j] != 2){
                f = 1;
                break;
            }
            else if(v[i]==v[j] && v[i]==2 && v[j]==2 && i==j){
                cost += mn;
            }
            else if(v[i]==v[j] && v[i]==2 && v[j]==2){
                cost += mn*2;
            }
            else if((v[i]==1 && v[j]==2) || (v[i]==2 && v[j]==1)){
                cost += b;
            }
            else if((v[i]==0 && v[j]==2) || (v[i]==2 && v[j]==0)){
                cost += a;
            }
            i++,j--;
        }
        if(f) cout << -1 << '\n';
        else cout << cost << '\n';

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