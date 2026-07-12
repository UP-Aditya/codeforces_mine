#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int p = (v[0])%2;
        int f = 0;
        for(int i=0;i<n;i++){
            if((v[i]+i)%2 != p){
                f = 1;
                break;
            }
        }
        if(f) cout << "NO\n";
        else cout << "YES" << endl;
        
    }
}