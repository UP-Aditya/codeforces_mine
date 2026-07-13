#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    n *= 2;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int f = 0;
    for(int i=0;i<n;i++){
        if(mp[v[i]]%2){
            f = 1;
            break;
        }
    }
    if(f){
        cout << -1 << '\n';
        return 0;
    }
    unordered_map<int,int> mp1;
    for(int i=0;i<n;i++){
        int x = v[i];
        if(mp1.count(x)){
            cout << mp1[x] << " " << i+1 << endl;
            mp1.erase(x);
        }
        else{
            mp1[x] = i+1;
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