#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> p;
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        int c1=0,c2=0;
        int minn1 = v[0];
        for(int i=0;i<n;i++){
            if(v[i]%minn1!=0){
                p.push_back(v[i]);
            }
        }
        if(p.size()==0){
            cout << "Yes\n";
            continue;
        }
        int f = 0;
        for(int i=0;i<p.size();i++){
            if(p[i]%p[0]!=0){
                f = 1;
                break;
            }
        }
        if(f) cout << "No\n";
        else cout << "Yes\n";
    }
}