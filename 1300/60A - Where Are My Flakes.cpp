#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n,m;
        cin >> n >> m;
        cin.ignore();
        vector<pair<int,char>> v1,v2;
        string s;
        if(m==0){
            cout << n;
            return 0;
        }
        while(m--){
            getline(cin,s);
            string p = "";
            int x = 15;
            if(s[7]=='r') x++;
            for(int i=x;i<s.size();i++){
                p += s[i];
            }
            if(s[7]=='l') v1.push_back({stoll(p),s[7]});
            else v2.push_back({stoll(p),s[7]});
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int p=-1,q=-1;
        if(!(v1.empty())) 
             p = v1[0].first;
        if(!(v2.empty()))
            q = v2[v2.size()-1].first;

        // cout << p << " " << q << endl;
        if(v1.empty() && v2.empty()) cout << -1;
        else if(v1.empty() && q<n) cout << n-q;
        else if(v2.empty() && p<=n+1 && p>1) cout << p-1;
        else if(p>=n+2 || p<=1 || q>=n) cout << -1;
        else if(q>=p || p-q==1) cout << -1;
        else cout << p-q-1;
        

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