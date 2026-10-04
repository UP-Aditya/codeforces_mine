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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string df = "";
        int f = 0;
        for(char tt='a';tt<='z';tt++){
            if(s.find(tt)==string::npos){
                df += tt;
                f = 1;
                break;
            }
        }
        if(f){
            cout << df << '\n';
            continue;
        }
        f = 0;
         for(char tt='a';tt<='z';tt++){
            for(char xx='a';xx<='z';xx++){
                string ad = "";
                ad += tt;
                ad += xx;
                if(s.find(ad)==string::npos){
                    f = 1;
                    df = ad;
                    break;
                }
            }
            if(f) break;
        }
        if(f){
            cout << df << '\n';
            continue;
        }

        for(char tt='a';tt<='z';tt++){
            for(char xx='a';xx<='z';xx++){
                // string ad = "";
                // ad += tt;
                // ad += xx;
                // if(s.find(ad)==string::npos){
                //     df += ad;
                //     f = 1;
                //     break;
                // }
                for(char pp='a';pp<='z';pp++){
                    string fd = "";
                    fd += tt;
                    fd += xx;
                    fd += pp;
                    if(s.find(fd)==string::npos){
                        f = 1;
                        df += fd;
                        break;
                    }
                }
                if(f) break;
            }
            if(f) break;
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