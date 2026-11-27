#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        vector<pair<int,int>> v;

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    v.push_back({1, j+1});
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(b[j] > b[j+1]){
                    swap(b[j], b[j+1]);
                    v.push_back({2, j+1});
                }
            }
        }

        for(int i=0; i<n; i++){
            if(a[i] > b[i]){
                swap(a[i], b[i]);
                v.push_back({3, i+1});
            }
        }

        cout << v.size() << "\n";
        for(auto &p : v) cout << p.first << " " << p.second << "\n";
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