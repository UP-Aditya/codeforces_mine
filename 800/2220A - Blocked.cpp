#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

const int N = 1e6 + 5;
vector<bool> is_prime(N,true);
vector<int> primes;

void sieve(){
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i * i < N; i++){
        if(is_prime[i]){
            for(int j = i * i; j < N; j += i){
                is_prime[j] = false;
            }
        }
    }

    for(int i = 2; i < N; i++){
        if(is_prime[i]) primes.push_back(i);
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        int f= 0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                f = 1;
                break;
            }
        }
        if(f) cout << -1 << '\n';
        else{
            // cout << v[n-1] << " ";
            for(int i=0;i<n;i++){
                cout << v[i] << " ";
            }
            cout << endl;
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