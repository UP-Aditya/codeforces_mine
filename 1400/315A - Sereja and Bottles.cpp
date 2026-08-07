#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i].first >> v[i].second;

    int c = 0;
    for(int i=0;i<n;i++){
        bool f = false;
        for(int j=0;j<n;j++){
            if(i!=j && v[j].second == v[i].first) {
                f = true;
                break;
            }
        }
        if(!f) c++;
    }
    cout << c << "\n";
}
