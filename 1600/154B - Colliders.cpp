#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> df(1e5+1,0),dd(1e5+1,0);
        map<int,vector<int>> mp;
        while(m--){
            char c;
            int p;
            cin >> c >> p;
            int x = p;
            if(c=='+'){
                int f=0;
                if(df[x]){
                    cout << "Already on\n";
                    continue;
                }
                vector<int> pm;
                for(int i=2;i*i<=p;i++){
                    if(p%i==0){
                        pm.push_back(i);
                        while(p%i==0) p /= i;
                    }
                }
                if(p>1) pm.push_back(p);
                for(auto &i : pm){
                    if(dd[i]){
                        f = dd[i];
                        break;
                    }
                }
                
                // puraa code hi bewafaa niklaa :#
                if(f){
                    cout << "Conflict with " << f << '\n';
                    // df[f] = 0;
                    // mp.erase(mp.find(f));
                    // continue;
                }
                else{
                    cout << "Success\n";
                    df[x] = 1;
                    for(auto &i : pm){
                        dd[i] = x;
                    }
                }
            }
            else{
                if(!df[x]){
                    cout << "Already off\n";
                }
                else{
                    cout << "Success\n";
                    df[x] = 0;
                    for(int i=2;i*i<=x;i++){
                        if(x%i==0){
                            dd[i] = 0;
                            while(x%i==0) x /= i;
                        }
                    }
                    if(x>1) dd[x] = 0;
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