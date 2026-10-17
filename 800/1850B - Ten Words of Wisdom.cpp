#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p;
        int mxx = -1;
        int c = 1;
        while(n--){
            int a,b;
            cin >> a >> b;
            if(a<=10 && b>mxx){
                mxx = b;
                p = c;
            }
            c++;
        }
        cout << p << "\n";
    }
    
   
}