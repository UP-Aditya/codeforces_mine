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
        int n,m;
        cin >> n >> m;
        vector<int> v(m);
        for(int i=0;i<m;i++){
            cin >> v[i];
        }
        if(m==1){
            cout << 2 << endl;
            continue;
        }
        sort(v.begin(),v.end());
        vector<int> vv;
        for(int i=0;i<m-1;i++){
            vv.push_back(v[i+1]-v[i]-1);
        }
        int f = (n-v[m-1])+(v[0]-1);
        if(f>0)
        vv.push_back(f);
        sort(vv.rbegin(),vv.rend());
        int t = 0;
        int sf = 0;
        for(int i=0;i<vv.size();i++){
            int x = vv[i]-(t*2);
            if(x<=0) break;
            if(x==1){
                sf += 1;
                t += 2;
            }
            else{
                sf += (x-1);
                t += 2;
            }
        }
        cout << n-sf << endl;

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