#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat
bool check(vector<int> &pre,int mid,int k,string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') continue;
        int fi = max(0LL,i-mid);
        int li = min((int)s.size()-1,i+mid);
        if(pre[li+1]-pre[fi] >= k+1){
            return true;
        }
    }
    return false;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> pre(n+1);
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i] + (s[i]=='0');
        }
        int l = 0,h = 1e6;
        int df = 0;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(pre,mid,k,s)){
                df = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout << df;

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