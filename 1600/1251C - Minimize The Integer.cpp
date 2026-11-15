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
        vector<int> a,b;
        for(int i=0;i<s.size();i++){
            int x = s[i]-'0';
            if(x%2){
                b.push_back(x);
            }
            else{
                a.push_back(x);
            }
        }
        // for(auto &i : a){
        //     cout << i << " ";
        // }
        // cout << '\n';
        // for(auto &i : b){
        //     cout << i << " ";
        // }
        // cout <<  "\n----------\n";
        int i=0,j=0;
        string p = "";
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                p += a[i]+'0';
                i++;
            }
            else{
                p += b[j]+'0';
                j++;
            }
        }
        if(i==a.size()){
            while(j<b.size()){
                p += b[j]+'0';
                j++;
            }
        }
        if(j==b.size()){
            while(i<a.size()){
                p += a[i]+'0';
                i++;
            }
        }
        cout << p << '\n';

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