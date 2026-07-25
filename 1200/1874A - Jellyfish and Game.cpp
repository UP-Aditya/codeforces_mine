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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> j(n);
        vector<int> g(m);
        for(int i=0;i<n;i++){
            cin >> j[i];
        }
        for(int i=0;i<m;i++){
            cin >> g[i];
        }
        int sum = accumulate(j.begin(),j.end(),0LL);
        int jmn = *min_element(j.begin(),j.end());
        int jmx = *max_element(j.begin(),j.end());
        int gmn = *min_element(g.begin(),g.end());
        int gmx = *max_element(g.begin(),g.end());
        if(k%2){
            if(jmn<gmx){
                sum -= jmn;
                sum += gmx;
            }
            cout << sum << '\n';
        }
        else{
            if(n==1 && m==1){
                cout << sum << '\n';
                continue;
            }
            else if(jmx < gmx){
                sum += gmn;
                sum -= jmx;
            }
            else if(jmn < gmx){
                sum -= jmn;
                sum += gmx;
                sum -= jmx;
                sum += gmn;
            }
            else{
                sum -= jmx;
                sum += gmn;
            }
            cout << sum << '\n';
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