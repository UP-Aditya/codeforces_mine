#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int f = 0;
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                f = 1;
                cout << 0 << endl;
                break;
            }
        }
        
         if(f==0){
        long long mindiff = LLONG_MAX;
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])<mindiff){
                mindiff =(arr[i] - arr[i-1]);
                
            }
        }
        cout << mindiff/2 + 1 << endl;
        
        }
    }
}