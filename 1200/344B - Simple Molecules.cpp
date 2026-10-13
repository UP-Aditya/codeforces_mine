#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // It was awsm but time taking !!

        int a,b,c;
        vector<int> v(3);
        for(int i=0;i<3;i++){
            cin >> v[i];
        }
        int p = v[0];
        int q = v[1];
        int r = v[2];
        sort(v.begin(),v.end());
        a = v[0];
        b = v[1];
        c = v[2];
        if((a+b)%2 != c%2 || c > a + b) cout << "Impossible\n";
        else{
            int x = a+b-c;
            if(p == c){
                cout << q - x/2 << " ";
                cout << x/2 << " ";
                cout << r - x/2;
            }
            else if(q == c){
                cout << p - x/2 << " ";
                cout << r - x/2 << " ";
                cout << x/2;
            }
            else{
                cout << x/2 << " ";
                cout << q - x/2 << " ";
                cout << p - x/2;
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