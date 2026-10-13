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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<int> ff;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ff.push_back(i+1);
        }

        int x = *min_element(ff.begin(),ff.end());
        int y = *max_element(ff.begin(),ff.end());
        int p = x-1;
        int q = y+1;
        int f1=0,f2=0;
        int t1=0,t2=0;
        int f11 = 0,f22=0;
        for(int i=0;i<n;i++){
            if(v[i]<=p && t1==0){
                f1 = v[i];
            }
            if(v[i]==x){
                t1 = 1;
            }
            if(v[i]==y){
                t2 = 1;
            }
            if(v[i]>=q && t2==1){
                f2 = v[i];
            } 
        }
        if(f1 != 0 && f2 != 0){
            cout << 1 << '\n';
            cout << f1 << " " << f2 << '\n';
        }
        else{
            cout << -1 << '\n';
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