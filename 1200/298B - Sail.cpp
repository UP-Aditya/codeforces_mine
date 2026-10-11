#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // pretty bulky could have been better !!
    // Now it's better !

    int t,s1,s2,e1,e2,f = 0;
    cin >> t >> s1 >> s2 >> e1 >> e2;
    string s;
    cin >> s;
    for(int i=0;i<t;i++){
        if(s[i] == 'E' && s1 < e1)  s1++;
        if(s[i] == 'W' && s1 > e1)  s1--;
        if(s[i] == 'N' && s2 < e2)  s2++;
        if(s[i] == 'S' && s2 > e2)  s2--;
        if(s1 == e1 && s2 == e2){
            f = i+1;
            break;
        }
    }
    if(!f) cout << -1 << '\n';
    else cout << f << '\n';



//        here i was rigid and was not checking directions dynamically 

    // if(s1 == e1 && s2 == e2) cout << 0;
    // else{
    //     if(e1 >= s1 && e2 >= s2){
    //         for(int i=0;i<t;i++){
    //             if(s[i] == 'N' && s2 != e2) s2++;
    //             else if(s[i] == 'E' && s1 != e1) s1++;
    //             if(s1==e1 && s2==e2){
    //                 f = i+1;
    //                 break;
    //             }
    //         }
    //     }
    //     else if(s1 >= e1 && s2 >= e2){
    //         for(int i=0;i<t;i++){
    //             if(s[i] == 'S' && s2 != e2) s2--;
    //             else if(s[i] == 'W' && s1 != e1) s1--;
    //             if(s1==e1 && s2==e2){
    //                 f = i+1;
    //                 break;
    //             }
    //         }
    //     }
    //     else if(s1 <= e1 && s2 >= e2){
    //         for(int i=0;i<t;i++){
    //             if(s[i] == 'S' && s2 != e2) s2++;
    //             else if(s[i] == 'E' && s1 != e1) s1++;
    //             if(s1==e1 && s2==e2){
    //                 f = i+1;
    //                 break;
    //             }
    //         }
    //     }
    //     else if(s1 >= e1 && s2 <= e2){
    //         for(int i=0;i<t;i++){
    //             if(s[i] == 'N' && s2 != e2) s2++;
    //             else if(s[i] == 'W' && s1 != e1) s1--;
    //             if(s1==e1 && s2==e2){
    //                 f = i+1;
    //                 break;
    //             }
    //         }
    //     }
    //     if(!f) cout << -1;
    //     else cout << f;

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