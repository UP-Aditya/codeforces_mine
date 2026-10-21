#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n,t;
        cin >> n >> t;
        string s;
        cin >> s;
        int ct = 0;
        // set<int> a,b,c;
        if(n>=3){
            for(int i=0;i<n-2;i++){
                if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') {
                    ct++;
                    // a.insert(i+1);
                    // b.insert(i+2);
                    // c.insert(i+3);
                }
            }
        }

        while(t--){
            int p1;
            char ch;
            cin >> p1 >> ch;
            p1--;
            if(n==1 || n==2){
                s[p1] = ch;
                cout << 0 << '\n';
            }
            else{
                int x = 0;
                s[p1] = ch;
                for(int i=0;i<=n-3;i++){
                    if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') x++;
                }
                cout << x << '\n';
                // if(ch=='a' && a.find(p1) != a.end()){
                //     cout << ct << '\n';
                // }
                // if(ch=='a' && b.find(p1) != b.end()){
                //     ct--;
                //     s[p1] = ch;
                //     cout << ct << '\n';
                // }
                // else if(ch=='a' && c.find(p1) != c.end()){
                //     ct--;
                //     s[p1] = ch;
                //     //cout << ct << '\n';
                // }
                // // else if(ch=='b' && b.find(p1) != b.end()){
                // //     cout << ct << '\n';
                // // }
                // else if(ch=='b' && a.find(p1) != a.end()){
                //     ct--;
                //     s[p1] = ch;
                //     //cout << ct << '\n';
                // }
                // else if(ch=='b' && c.find(p1) != c.end()){
                //     ct--;
                //     s[p1] = ch;
                //     //cout << ct << '\n';
                // }
                // // else if(ch=='c' && c.find(p1) != c.end()){
                // //     //cout << ct << '\n';
                // // }
                // else if(ch=='c' && b.find(p1) != b.end()){
                //     ct--;
                //     s[p1] = ch;
                //     //cout << ct << '\n';
                // }
                // else if(ch=='c' && a.find(p1) != a.end()){
                //     ct--;
                //     s[p1] = ch;
                //     //cout << ct << '\n';
                // }
                // else if(ch=='a'){
                //     if(p1<=n-3){
                //         if(s[p1] != 'a' && s[p1+1]=='b' && s[p1+2]=='c') ct++;
                //     }
                //     s[p1] = ch;
                // }
                // else if(ch=='b'){
                //     if(p1>=1 && p1<=n-2){
                //         if(s[p1] != 'b' && s[p1+1]=='c' && s[p1-1]=='a') ct++;
                //     }
                //     s[p1] = ch;
                // }
                // else if(ch=='c'){
                //     if(p1>=2){
                //         if(s[p1-2] != 'a' && s[p1-1]=='b' && s[p1]!='c') ct++;
                //     }
                //     s[p1] = ch;
                // }
                // cout << ct << '\n';
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