#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
   int p = (n+1)/2;
   int f = (p+m-1)/m*m;
   if(f>n){
    cout << -1 << "\n";
   }
   else cout << f << "\n";
}