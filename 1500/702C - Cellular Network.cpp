#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> ct(n),tw(m);
        for(int i=0;i<n;i++){
            cin >> ct[i];
        }
        for(int i=0;i<m;i++){
            cin >> tw[i];
        }
        auto check=[&](int mid)->bool{
            for(int i=0;i<n;i++){
                int x = lower_bound(tw.begin(),tw.end(),ct[i])-tw.begin();
                int y = upper_bound(tw.begin(),tw.end(),ct[i])-tw.begin();
                if(abs(ct[i]-tw[x])<=mid) continue;
                else if(x>0 && abs(ct[i]-tw[x-1])<=mid) continue;
                else if(x<n && abs(ct[i]-tw[y])<=mid) continue;
                else return false;
            }
            return true;
        };
        int r = -1;
        int l=0,h=1e18;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(mid)){
                r = mid;
                h = mid-1;
            }
            else l = mid+1;
        }
        cout << r << '\n';

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