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
        string s;
        cin >> s;
        int n = s.size();
        if(n==1) cout << -1 << endl;
        else if(n==2){
            if(s[0]==s[1]) cout << s[0]<<s[1] << endl;
            else cout << -1 << endl;
        }
        else{
            int f = 0;
            string p = "";
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    f = 1;
                    p += s[i];
                    p += s[i+1];
                    break;
                }
            }
            if(f) cout << p  << endl;
            else{
                p = "";
                f = 0;
                for(int i=0;i<n-2;i++){
                    set<char> st;
                    p = "";
                    for(int j=i;j<i+3;j++){
                        p += s[j];
                        st.insert(s[j]);
                    }
                    if(st.size()==3){
                        f = 1;
                        break;
                    }
                }
                if(f) cout << p << endl;
                else cout << -1 << endl;
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