#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> dff(n+1,0);
    while(q--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        dff[l]++;
        dff[r+1]--;
    }
    vector<int> vv(n);
    vv[0] = dff[0];
    for(int i=1;i<n;i++){
        vv[i] = vv[i-1]+dff[i];
    }
    sort(v.rbegin(),v.rend());
    sort(vv.rbegin(),vv.rend());

    int df = 0;
    for(int i=0;i<n;i++){
        df += v[i]*vv[i];
    }
    cout << df << '\n';
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


// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// //:__: chahat

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//         int n,q;
//         cin >> n >> q;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
//             cin >> v[i];
//         }
//         sort(v.begin(),v.end());
//         int x,y;
//         unordered_map<int,int> mp;
//         vector<pair<int,int>> p;
//         vector<pair<int,int>> p1;
//         while(q--){
//             cin >> x >> y;
//             mp[x]++;
//             mp[y]++;
//             p.push_back({x,y});
//         }
//         for(auto &i : mp){
//             p1.push_back({i.second,i.first});
//         }
//         sort(p1.rbegin(),p1.rend());
//         vector<int> vv(n);
//         int i = (v.size()+1)/2;
//         int j = i+1;
//         int f = 0;
//         int r = v.size() - 1;
//         for(auto &k : p1){
//             if(!f){
//             vv[k.second - 1] = v[r];
//             r--;
//             // i--;
//             f = 1;
//             }
//             else if(f){
//                 vv[k.second-1] = v[r];
//                 f = 0;
//                 r--;
//                 // j++;
//             }
//         }
//         i = 0;
//         for(auto &i : vv){
//             cout << i << " ";
//         }


// }
