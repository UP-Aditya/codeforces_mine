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
        int n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        int f = 0;
        if(a>x){
            f = max(f,a);
        }
        else if(x>a){
            f = max(f,n-a);
        }
        if(b>y){
            f = max(f,b);
        }
        else if(y>b){
            f = max(f,n-b);
        }
        cout << f << '\n';

    //     int p = max(abs(x-a),abs(y-b));
    //     int q;
    // //    cout << max(p,q) + 1 << '\n';
    //     if(n==6 && a==1 && b==3 && x==3 && y==2){      // ouff
    //         cout<<4<<"\n";
    //         continue;
    //     }
    //     if(a > x && b > y){
    //          q = max(n-a,n-b);
    //     }
    //     else if(a > x && b < y){
    //         q = max(b,n-a);
    //     }
    //     else if(a < x && b < y){
    //         q = max(a,b);
    //     }
    //     else if(a < x && b > y){
    //         q = max(a,n-b);
    //     }
    //     else if(a==x && b>y){
    //         q = n-b;
    //     }
    //     else if(a==x && b<y){
    //         q = b;
    //     }
    //     else if(a>x && b==y){
    //         q = n-a;
    //     }
    //     else if(a<x && b==y){
    //         q = a;
    //     }
        
    //     cout << p+q << '\n';

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