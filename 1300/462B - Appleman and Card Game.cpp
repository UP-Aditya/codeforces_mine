// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// //:__: aditya_up62

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     // before this submission of the same problem 
//     // I corrected my past code when i didn't had a template
//     // so integer overflowed occured as I was not using line 3 back then
//     // -!- someone is growing Huhhh!!!⚡

//     int n,k;
//     cin >> n >>k;
//     string s;
//     cin >> s;
//     map<char,int> m;
//     for(auto i : s){
//         m[i]++;
//     }
//     vector<int> v;
//     for(auto i : m){
//         v.push_back(i.second);
//     }
//     sort(v.begin(),v.end());
//     int coins = 0;
//     for(int i=v.size()-1;i>=0;i--){
//         if(k>=v[i]){
//             coins += v[i]*v[i];
//             k -= v[i];
//         }
//         else if(k<v[i]){
//             coins += k*k;
//             k = 0;
//         }
//         if(k==0) break;
//     }
//     cout << coins;
// }


// /*
// ⠀⠀⠀⠀⠀⠀⣠⠴⠲⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀63⠀⠀⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀⠀⢀⡀
// ⠠⠞⠙⠱⡆⠀⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆⠀
// ⠀⠀⠀⣰⠏⠀⠀⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁⠀⠀
// ⠀⢀⡼⠁⠀⣠⣾⣿⣿⣿⣿⣿⣿⡯⠀⠀⠀⠀⠀⠀
// ⠀⡞⠀⠀⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄⠀⠀⠀⠀⠀
// ⢸⡃⠀⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇⠀⠀⠀⠀
// ⠘⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂⠀⠀⠈⠀⠀⠀⠀
// ⠀⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠙⠙⠻⠿⠿⠿⠿⠶⠶⠀⠀⠀⠀⠀⠀
// */

//  ¯\_(ツ)_/¯

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char,long long> f;
    for(char c : s)
        f[c]++;

    vector<long long> c;
    for(auto &p : f){
        c.push_back(p.second);
    }

    sort(c.begin(),c.end());

    long long cc = 0;
    for(int i = c.size() - 1; i >= 0 && k > 0; i--)
    {
        int t = min(k,c[i]);
        cc += t * t;
        k -= t;
    }

    cout << cc << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t;
    // cin >> t; 
    // for (int i = 1; i <= t; i++)
        solve();

    return 0;
}