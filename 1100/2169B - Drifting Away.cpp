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
        string s;
        cin >> s;
        int n = s.size();
        if(n==1){
            cout << 1 << '\n';
        }
        else{
            int f = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='*' && s[i+1]=='*') f = 1;
            else if(s[i]=='>' && s[i+1]=='<') f = 1;
            else if(s[i]=='>' && s[i+1]=='*') f = 1;
            else if(s[i]=='*' && s[i+1]=='<') f = 1;
        }
        if(f) cout << -1 << '\n';
        else{
            int x = 0;
            int x1 = 0;
            int y = 0;
            int y1 = 0;
            for(int i=0;i<n;i++){
                if(s[i]=='>'){
                    x++;
                }
                else if(s[i]=='*'){
                    x1++;
                }
            }
            for(int i=0;i<n;i++){
                if(s[i]=='<'){
                    y++;
                }
                else if(s[i]=='*'){
                    y1++;
                }
            }
            cout << max(x1+x,y1+y) << '\n';
        }
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