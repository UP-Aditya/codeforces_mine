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
        long long so=0,se=0,ce=0,co=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                se += v[i];
                ce++;
            }
            else{
                so += v[i];
                co++;
            }
        }
        if(so/co == se/ce && so%co==0 && se%ce==0) cout << "YES\n";
        else cout << "NO\n";

    }
    }
