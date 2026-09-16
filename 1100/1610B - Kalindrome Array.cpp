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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(n<2){
            cout << "YES\n";
            continue;
        }
        int i=0,j=n-1;
        while(v[i]==v[j] && i<j){
            i++,j--;
        }
        vector<int> p;
        for(int k=i;k<=j;k++){
            p.push_back(v[k]);
        }
        n = p.size();
        vector<int> cp = p;
        p.erase(remove(p.begin(),p.end(),v[i]),p.end());
        int f = 0;
        for(int i=0;i<p.size();i++){
            if(p[i] != p[p.size()-i-1]){
                f = 1;
                break;
            }
        }
        if(!f){
            cout << "YES\n";
            continue;
        }
        else{
            f = 0;
            cp.erase(remove(cp.begin(),cp.end(),v[j]),cp.end());
            for(int i=0;i<cp.size();i++){
                if(cp[i] != cp[cp.size()-i-1]){
                    f = 1;
                    break;
                }
            }
            if(f) cout << "NO\n";
            else cout << "YES\n";
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