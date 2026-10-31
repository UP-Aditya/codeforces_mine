#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat
bool check(vector<pair<int,int>> &vp,int mid){
    for(auto &i : vp){
        if(mid >= i.first){
            mid += i.second;
        }
        else return false;
    }
    return true;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> vp;
        while(n--){
            int k;
            cin >> k;
            int p = 0;
            int c = 0;
            int idx;
            int x;
            while(k--){
                cin >> x;
                c++;
                p= max(p,x-c+2);
            }
            // int r = p-idx+2;
            vp.push_back({p,c});
        }
        sort(vp.begin(),vp.end());
        int l = 1,h=1e18,df = 1e18;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(check(vp,mid)){
                df = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout << df << '\n';
        // for(auto &i : vp){
        //     cout << i.first << " " << i.second << '\n';
        // }

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