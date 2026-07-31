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
        string s,t;
        cin >> s >> t;
        map<int,int> mp1,mp2;
        for(auto &i : s) mp1[i]++;
        for(auto &i : t) mp2[i]++;
        int f = 0;
        for(auto &i : mp1){
            if(i.second > mp2[i.first]) {
                cout << "Impossible\n";
                f = 1;
                break;
            }
        }
        if(!f){
        string rem = "";
        for(auto &i : mp2) {
            int df = i.second-mp1[i.first];
            while(df--) rem += i.first;
        }
        int n = s.size();
        string ans = "";
        int i=0,j=0;
        while(i<rem.size() && j<n){
            if(rem[i]<s[j]){
                ans += rem[i];
                i++;
            } 
            else if(rem[i] > s[j]){
                ans += s[j];
                j++;
            } 
            else{
                int k = j+1;
                while(k<n && s[k]==s[j]){
                    k++;
                }
                if(k<n && s[k]<s[j]){
                    ans += s[j++];
                } 
                else{
                    ans += rem[i];
                    i++;
                }
            }
        }
        for(int k=i;k<rem.size();k++){
            ans += rem[k];
        }
        for(int k=j;k<n;k++){
            ans += s[k];
        }
        cout << ans << "\n";
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