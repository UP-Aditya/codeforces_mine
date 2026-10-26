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
        int n;
        cin >> n;
        int l = s.size();
        unordered_map<int,bool> mp;
        if(l>=4){
            for(int i=0;i<=n-3;i++){
                if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
                    mp[i] = true;
                }
            }
        }
        while(n--){
            int i; cin >> i;
            char ch; cin >> ch;
            i--;
            if(l<4) cout << "NO\n";
            else{
                if(mp[i] || mp[i-1]){
                    if(ch=='0'){
                        mp[i] = false;
                        cout << "NO\n";
                    }
                    else{
                        cout << "YES\n";
                    }
                s[i] = ch;
                }
                else{
                    if(ch=='1'){
                        if(i+2<n && s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
                            mp[i] = true;
                            cout << "YES\n";
                        }
                        else if(i+3<n && s[i]=='0' && s[i-1]=='1' && s[i+1]=='0' && s[i+2]=='0'){
                            mp[i-1] = true;
                            cout << "YES\n";
                        }
                        else cout << "NO\n";
                    }
                    else if(ch=='0'){
                        if(i+1<n && i-2>0 && s[i]=='1' && s[i-1]=='1' && s[i-2]=='1' && s[i+1]=='0'){
                            mp[i-2] = true;
                            cout << "YES\n";
                        }
                        else if(i+1<n && i-2>0 && s[i]=='1' && s[i-1]=='0' && s[i-2]=='1' && s[i-3]=='1'){
                            mp[i-3] = true;
                            cout << "YES\n";
                        }
                        }
                        else{
                            cout << "NO\n";
                        }
                        s[i] = ch;
                    }
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