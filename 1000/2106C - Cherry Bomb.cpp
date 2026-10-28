#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// ATP Intensive task  !!

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int x = *min_element(a.begin(),a.end());
        int y = *max_element(a.begin(),a.end());
        int f = 0;
        int c = 0;
        for(int i=0;i<n;i++){
            if(b[i] != -1){
                f = 1;
                c++;
            }
        }
        if(!f){
            if(x+k >= y){
                cout << x + k - y + 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else{
            int ff;
            if(c>1){
                int f1 = 0;
                int ss = 0;
            for(int i=0;i<n;i++){
                if(b[i] != -1 && f1 == 0){
                    f1 = 1;
                    ff = a[i] + b[i];
                }
                else if(b[i] != -1 && f1 == 1){
                    if(a[i]+b[i] != ff){
                        ss = 1;
                        break;
                    }
                    else continue;
                }
            }
            if(ss){
                cout << 0 << '\n';
            }
            else{
                int d = 0;
                if(abs(ff-x) <= k && abs(y-ff) <= k){
                    for(int i=0;i<n;i++){
                        if(a[i] > ff){
                            d = 1;
                            break;
                        }
                    }
                    if(d) cout << 0 << '\n';
                    else cout << 1 << '\n';
                }
                else{
                    cout << 0 << '\n';
                }
            }
            }
            else{
                for(int i=0;i<n;i++){
                    if(b[i] != -1){
                        ff = a[i] + b[i];
                        break;
                    }
                }
                int d = 0;
                if(abs(ff-x) <= k && abs(y-ff) <= k){
                    for(int i=0;i<n;i++){
                        if(a[i] > ff){
                            d = 1;
                            break;
                        }
                    }
                    if(d) cout << 0 << '\n';
                    else cout << 1 << '\n';
                }
                else{
                   cout << 0 << '\n';
            }
            
        }
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