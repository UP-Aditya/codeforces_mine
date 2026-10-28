#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int solve(int val,vector<int>& v){
    int n = v.size();
    int ts = 0;
    for(int i=0;i<n;i++){
        int df = v[i];
        int f = 1;
        int c = 0;
        int one = 2;
        while(df!=val && one){
            c++;
            if(df%2 == 1){
                if(df==1){
                    one--;
                }
                df += 1;
            } 
            else{
                df /= 2;
            }
        }
        if(df!=val){
            f = 0;
        }
        if(!f){
            return 1e18; 
        }
        ts += c;
    }
    return ts;
}

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
            sort(v.begin(),v.end());
            int val = v[0];
            int mini = solve(val,v);
            if(val%2){
                val++;
            }
            while(val!=1){
                int res = solve(val,v);
                mini = min(mini,res);
                if(val%2==1){
                    val += 1;
                }
                else{
                    val /= 2;
                }
            }
            int res = solve(1,v);
            mini = min(mini,res);
            cout << mini << '\n';

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