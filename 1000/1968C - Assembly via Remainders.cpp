#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n-1); 
        vector<long long> p(n);

        p[0] = 1e8;
        for(int i=0;i<n-1;i++){
            cin >> v[i];
            p[i+1] = p[i] + v[i];
        }
        for(int i=0;i<n;i++) cout << p[i] << " ";
        cout << "\n";
    }
}
