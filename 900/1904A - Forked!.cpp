#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62


int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        set<pair<int, int>> m1,m2;

        for(int i=0;i<4;i++){
            m1.insert({x1+dx[i] * a,y1+dy[i] * b});
            m2.insert({x2+dx[i] * a,y2+dy[i] * b});

            m1.insert({x1 + dx[i] * b, y1 + dy[i] * a});
            m2.insert({x2 + dx[i] * b, y2 + dy[i] * a});
        }
        int c = 0;
        for(auto p : m1){
            if(m2.count(p)){
                c++;
            }
        }

        cout << c << '\n';

    }
}


/*
⠀⠀⠀⠀⠀⠀⣠⠴⠲⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀63⠀⠀⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀⠀⢀⡀
⠠⠞⠙⠱⡆⠀⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆⠀
⠀⠀⠀⣰⠏⠀⠀⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁⠀⠀
⠀⢀⡼⠁⠀⣠⣾⣿⣿⣿⣿⣿⣿⡯⠀⠀⠀⠀⠀⠀
⠀⡞⠀⠀⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄⠀⠀⠀⠀⠀
⢸⡃⠀⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇⠀⠀⠀⠀
⠘⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂⠀⠀⠈⠀⠀⠀⠀
⠀⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠙⠙⠻⠿⠿⠿⠿⠶⠶⠀⠀⠀⠀⠀⠀
*/