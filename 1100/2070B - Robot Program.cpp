#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        long long n,x,k;
        cin >> n >> x >> k;
        string str;
        cin >> str;
        int c = 0;
        int p = -1;
        for(int i=0;i<n;i++){
            if(str[i]=='L')
                x -= 1;
            else
                x += 1;
            if(x==0){
                p = i+1;
                break;
            }
        }
        if(p != -1){
            int c = -1;
            for(int i=0;i<n;i++){
                if(str[i]=='L'){
                    x--;
                } 
                else
                    x++;
                if(x==0){
                    c = i + 1;
                    break;
                }
            }
            if(c==-1){
                if(p<=k)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
            }
            else{
                if(p>k)
                    cout << 0 << endl;
                else
                    cout << 1 + (k-p)/c << endl;
            }
        }
        else
            cout << 0 << endl;
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