#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int c,d;
        cin >> c >> d;
        int ff = min(b,d) - max(a,c);
        if(c >b|| a > d) cout << 1  << "\n";
        else if(a==c && b==d) cout << ff << "\n";
        else if(b==d || a==c) cout << ff + 1 << "\n";
        else {
            cout << ff + 2 << "\n";
        }
        
    }
}