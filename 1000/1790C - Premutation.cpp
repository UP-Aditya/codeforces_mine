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
        int n;
        cin >> n;
        int p = n-1;
        vector<vector<int>> ff;
        while(n--){
            vector<int> f(p);
            for(int i=0;i<p;i++){
                cin >> f[i];
            }
            ff.push_back(f);
    }
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<p;i++){                    // p = n-1
        for(int j=0;j<p+1;j++){
            mp[ff[j][i]]++;
        }
        int x = LLONG_MIN, y = LLONG_MIN;
        for(auto &i : mp){
            if(i.second > y){
                y = i.second;
                x = i.first;
            }
        }
        ans.push_back(x);
        mp[x] = 0;

    }
    int x = 0,y = 0;
    x = accumulate(ans.begin(),ans.end(),0LL);
    y = ((p+1)*(p+2))/2;
    ans.push_back(y-x);
    swap(ans[p],ans[p-1]);
    for(auto &i : ans){
        cout << i << " ";
    }
    cout << '\n';
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