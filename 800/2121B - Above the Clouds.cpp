#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ok = false;
        for(int i=1;i<n-1;i++){
            bool f1=false,f2=false;
            char b = s[i];
            for(int k=0;k<i;k++){
                if(s[k]==b){
                    f1 = true;
                    break;
                }
            }
            for(int j=i+1;j<n;j++){
                if(s[j]==b){
                    f2 = true;
                    break;
                }
            }
            if(f1 || f2){
                ok = true;
                break;
            }

        }   
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
    
}