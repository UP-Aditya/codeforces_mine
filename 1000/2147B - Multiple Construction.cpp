#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(2*n, -1);

        for(int x=n, i=0; x>0; x-=2, i++){
            if(i < n/2){
                v[i] = v[i+x] = x;
            }
        }
        for(int p=n-1, i=0; p>0 && i<2*n; i++){
            if(v[i] == -1){
                v[i] = v[i+p] = p;
                p -= 2;
            }
        }
        for(auto &i : v) if(i==-1) i=1;

        for(auto &i : v) cout << i << " ";
        cout << "\n";
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

//           APPROACH 2


// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// //:__: aditya_up62

// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr); 
//     cout.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//     int n; 
//     cin >> n;
//     vector<int> v(2*n);

//     if(n%2!=0){
//         int p = n;
//         for(int i=0;i<n;i++) {
//             v[i]=p;  
//             p--;  
//         }  
//         v[n]=n;
//         p = 1;
//         for(int i=n+1;i<2*n;i++){
//             v[i] = p;
//             p++;
//         }
//     }
//     else{
//         for(int i=0;i<n;i++) {
//             v[i]=n-i;      
//         }
//         v[n]=n; 
//         int p = 1;
//         for(int i=n+1;i<2*n;i++){
//             v[i]=p;  
//             p++;
//         }
//     }
//     for(auto &i :v) cout << i << " ";
//     cout << "\n";
// }

// }

// /*
// ⠀⠀⠀⠀⠀⠀⣠⠴⠲⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀63⠀⠀⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀⠀⢀⡀
// ⠠⠞⠙⠱⡆⠀⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆⠀
// ⠀⠀⠀⣰⠏⠀⠀⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁⠀⠀
// ⠀⢀⡼⠁⠀⣠⣾⣿⣿⣿⣿⣿⣿⡯⠀⠀⠀⠀⠀⠀
// ⠀⡞⠀⠀⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄⠀⠀⠀⠀⠀
// ⢸⡃⠀⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇⠀⠀⠀⠀
// ⠘⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂⠀⠀⠈⠀⠀⠀⠀
// ⠀⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠙⠙⠻⠿⠿⠿⠿⠶⠶⠀⠀⠀⠀⠀⠀
// */
