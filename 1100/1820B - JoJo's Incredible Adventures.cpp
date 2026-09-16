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
        string s;
        cin >> s;
        int n = s.size();
        int f = 0,f1 = 0;
      //  int c1 = 0,c0 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                f = 1;
                //c1++;
            }
            else{
                f1 = 1;
               // c0++;
            }
        }
        if(!f){
            cout << 0 << '\n';
            continue;
        }
        else if(!f1){
            cout << n*n << '\n';
            continue;
        }
        else{
        int c = 1;
        int mx = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1] && s[i]=='1'){
                c++;
            }
            else{
                mx = max(mx,c);
                c = 1;
            }
        }
        mx = max(mx,c);
        int xx1 = 0,xx2 = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                xx1++;
            }
            else{
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') xx2++;
            else break;
        }
        mx = max(xx1+xx2,mx);
        int a = (mx+1)/2;
        int b = (mx+2)/2;
        cout << a*b << '\n';
        // if(mx%2){
        //     mx = mx/2 + 1;
        //     mx =  mx*mx;
        // }
        // else{
        //     mx = mx/2;
        //     mx = mx*(mx+1);
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