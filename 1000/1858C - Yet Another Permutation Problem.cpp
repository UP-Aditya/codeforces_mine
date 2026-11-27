#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+1,0);
        vector<int> p;
        for(int i=1;i<=n;i+=2){
            int x = i;
            while(x<=n && !v[x]){
                p.push_back(x);
                v[x] = 1;
                x *= 2;
            }
        }
        for(int i : p) cout << i << " ";
        cout << '\n';
    }
}
