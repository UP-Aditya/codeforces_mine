#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> dist(n);
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            cin >> v[i];
            freq[v[i]]++;
            if(freq[v[i]] == 1){
                dist[i] = 1;
            }
            if(i>0){
                dist[i] += dist[i-1];
            }
        }
        for(int i=0;i<=n;i++){
            freq[i] = 0;
        }
        int ans = 0;
        int end = n - 1;
        int total = 0;
        for(int i=n-1;i>=0;i--){
            freq[v[i]]++;
            if(freq[v[i]] == 1){
                total++;
            }
            if(total== dist[end]){
                ans++;
                for(int j=i;j<=end;j++){
                    freq[v[j]] = 0;
                }
                end = i-1;
                total = 0;
            }
        }
        cout << ans << '\n';
        
    }
}