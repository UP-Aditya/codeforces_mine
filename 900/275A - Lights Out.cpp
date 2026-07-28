#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>> v(3,vector<int>(3));
    vector<vector<int>> p(3,vector<int>(3,1));

    int dx[] = {0,1,-1,0,0};
    int dy[] = {0,0,0,1,-1};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(v[i][j]%2 == 1){
                for(int k=0;k<5;k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni>=0 && ni<3 && nj>=0 && nj<3)
                        p[ni][nj] ^= 1;
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << p[i][j];
        }
        cout << "\n";
    }
}
