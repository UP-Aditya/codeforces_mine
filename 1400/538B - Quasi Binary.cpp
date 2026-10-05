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
        int n;
        cin >> n;
        vector<int> v = {1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000,100001,100010,100011,100100,100101,100110,100111,101000,101001,101010,101011,101100,101101,101110,101111,110000,110001,110010,110011,110100,110101,110110,110111,111000,111001,111010,111011,111100,111101,111110,111111,1000000};
        sort(v.begin(),v.end());
        int l = lower_bound(v.begin(),v.end(),n)-v.begin();
        if(l==v.size()) l--;
        if(n%v[l]==0){
            cout << n/v[l] << '\n';
            int x = n/v[l];
            while(x--){
                cout << v[l] << '\n';
            }
        }
        else{
            // vector<int> xx;
            // for(int i=l-1;i>=0;i--){
            //     if(n==0) break;
            //     while(n>=v[i]){
            //         n -= v[i];
            //         xx.push_back(v[i]);
            //     }
            // }
            // cout << xx.size() << '\n';
            // for(auto &i : xx){
            //     cout << i << " ";
            // }
            // int p = 1e6;
            // vector<int> pp,xx;
            // for(int i=l-1;i>=0;i--){
            //     int x = n-v[i];
            //     for(int j=l-1;j>=0;j--){
            //         if(x%v[j]==0 && p>(x/v[j])){
            //             p = x/v[j];
            //             pp.clear();
            //             xx.clear();
            //             xx.push_back(v[i]);
            //             pp.push_back(v[j]);
            //         }
            //     }
            // }
            // // cout << p << '\n';
            // if(xx.size()){
            //     cout << xx.size() + p << '\n';
            // }
            // cout << xx[0] << " ";
            // while(p--){
            //     cout << pp[0] << " ";
            // }
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