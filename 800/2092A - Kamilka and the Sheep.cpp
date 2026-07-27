#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    cout << a[n-1] - a[0] << endl;
    }
}
    