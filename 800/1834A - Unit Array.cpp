#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int cn=0;
    int cp=0;
    for(auto i: v){
        if(i<0) cn++;
    }
    long k = 0;
    cp = n - cn;
    while(cn>cp || cn%2!=0){
        cn--;
        cp++;
        k++;
    }
    cout << k << endl;
    }

    }
