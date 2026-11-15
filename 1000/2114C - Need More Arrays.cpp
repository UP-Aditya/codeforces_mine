#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int c = -1;
        int f = 0;
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++){
            if(v[i]-c > 1){
                c = v[i];
                f++;
            }
        }
        cout << f << endl;
    }
}