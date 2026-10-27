#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int sec = v[n-1];
        for(int i=n-2;i>=0;i--){
            sec = max(sec+1,v[i]);
        }
        cout << sec << "\n";
    }
}