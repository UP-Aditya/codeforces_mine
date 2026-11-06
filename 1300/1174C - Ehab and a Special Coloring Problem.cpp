#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62
bool prim(int x){
    // int p = x;
    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int n;
        cin >> n;
        vector<int> v(n+1,-1);
        int cp = 1;
        // int f = 0;
        // for(int i=2;i<=n;i++){
        //     if(prim(i)){
        //         cp++;
        //         v.push_back(cp);
        //     }
        //     else if(f == 0){
        //         v.push_back(1);
        //         f = 1;
        //     }
        //     else{
        //         v.push_back(2);
        //         f = 0;
        //     }
        // }
        

        for(int i=2;i<=n;i++){
            if(v[i]==-1){
                v[i]=cp;
                cp++;
                for(int j=i;j<=n;j+=i){
                    v[j]=v[i];
                }
            }
        }
        for(int i=2;i<=n;i++){
            cout << v[i] << " ";
        }
        cout << '\n';

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