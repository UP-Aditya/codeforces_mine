    #include<bits/stdc++.h>
    using namespace std;
    #define int long long
    //:__: aditya_up62

    int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
            int n;
            cin >> n;
            vector<int> v(n);
            for(int i=0;i<n;i++){
                cin >> v[i];
            }
            sort(v.begin(),v.end());
            int mn = v[0];
            int mx = v[n-1];
            int cn = 0,cx = 0;
            for(int i=0;i<n;i++){
                if(v[i] == mn) cn++;
                else if(v[i] == mx) cx++;
            }
            if(mx == mn) cout << 0 << " " << (n*(n-1))/2;
            else cout << mx-mn << " " << cn*cx;
            
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