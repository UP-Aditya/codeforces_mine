#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long c, d;
        cin >> n >> c >> d;

        vector<long long> v(n*n);
        for(int i=0;i<n*n;i++)
            cin >> v[i];

        sort(v.begin(),v.end());
        long long p = v[0];
        vector<long long> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                q.push_back(p + i*c + j*d);
            }
        }
        sort(q.begin(),q.end());
        if(q == v)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
