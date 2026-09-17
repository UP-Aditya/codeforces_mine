#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    const int N = 1e9+7;
    const int inv2 = 500000004;      // Modular inverse of 2 modulo 1e9+7 from BE
    const int inv6 = 166666668;      // Modular inverse of 6 modulo 1e9+7from BE
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int doggy = 1;
        int a = n % N;
        int b = (n+1)%N;
        int c = (2*n+1)%N;
        
        int si = a * b%N * c%N * inv6 % N;
        int sii = a * b%N*inv2 % N;
        doggy = (2*si % N - sii + N)%N;
        doggy = doggy*2022 % N;
        cout << doggy << '\n';
        

    //     int k = n/2;
    //     if(n<=1e8){
    //     for(int i=2;i<=n;i++){
    //         doggy += i*i;
    //         doggy += i*(i-1);
    //     }
    // }
    // else{
    //     for(int i=2;i<k;i++){
    //         doggy += i*i;
    //         doggy += i*(i-1);
    //     }
    //     for(int i=k;i<=n;i++){
    //         doggy += i*i;
    //         doggy += i*(i-1);
    //     }

    // }
            // doggy += (k*(k+1))/2;
            // doggy += n/2*(2*k + (n-1)*k);
            // int p = k*n;
            // doggy += (n-k+1)/2*(2*p + (n-k)*n);
            // doggy -= k;
            // doggy -= p;
        //     doggy *= 2022;
        // cout << doggy%N << '\n';

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