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
        int n, k;
        cin >> n >> k; 
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        vector<int> ls(k+1,-1);
        vector<int> mx(k+1,0);
        vector<int> mx2(k+1,0);

        for(int i=0;i<n;i++){
            int gap = i-ls[v[i]]-1; 
            if(gap > mx[v[i]]){
                mx2[v[i]] = mx[v[i]];
                mx[v[i]] = gap;
            } 
            else if(gap > mx2[v[i]]){
                mx2[v[i]] = gap;
            }
            ls[v[i]] = i;
        }
        for(int i=1;i<=k;i++){
            if(ls[i] != -1){
                int gap = n-ls[i]-1;
                if(gap > mx[i]){
                    mx2[i] = mx[i];
                    mx[i] = gap;
                } 
                else if(gap > mx2[i]){
                    mx2[i] = gap;
                }
            }
        }
        int df = n; 
        for(int i=1;i<=k;i++){
            if(ls[i]!= -1){
                int d = max(mx2[i],mx[i]/2); 
                df = min(df,d);
            }
        }
        cout << df << '\n';
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