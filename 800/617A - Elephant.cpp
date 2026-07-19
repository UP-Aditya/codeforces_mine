#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // take 2 lol
    
    /*   till 42 : This is the code I wrote on 2nd March'25 was 1 day old at forces !
         from 40 lines to 4 lines 
         #daybydaystepbystep 
    */

//     #include<stdio.h>
// int main(){
// int n,c=0;
// scanf("%d",&n);
// while(n!=0){
//     if(n>=5){
//         n=n-5;
//         c++;
//     }
//     else if(n>3){
//         n=n-4;
//         c++;
//     }
//     else if(n>2){
//         n=n-3;
//         c++;
//     }
//     else if(n>1){
//         n=n-2;
//         c++;
//     }
//     else if(n>1){
//         n=n-1;
//         c++;
//     }
// }
// printf("%d\n",c);
//     return 0;
//
// }

//        
        int n; cin >> n;
        if(n <= 5) cout << 1;
        else if(n%5) cout << n/5 + 1;
        else cout << n/5;
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