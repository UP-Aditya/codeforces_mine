#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int s = 1,l = n;
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                cout << s << " ";
                s++;
            }
            else{
                cout << l << " ";
                l--;
            }
        }
        cout << "\n";
    }
}
