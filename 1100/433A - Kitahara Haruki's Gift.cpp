#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,c1 = 0,c2 = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x==100) c1++;
        else c2++;
    }

    int sum = c1*100 + c2*200;
    if(sum%200!= 0){
        cout << "NO\n";
        return 0;
    }

    int h = sum/2;
    int u2 = min(c2,h/200);
    h -= u2*200;

    cout << (h <= c1*100 ? "YES\n" : "NO\n");
}
