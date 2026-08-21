#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        vector<int> a1(n),b1(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        a1 = a;
        b1=b;
        if(*min_element(a.begin(),a.end())> *min_element(b.begin(),b.end()) || *max_element(a.begin(),a.end())>*max_element(b.begin(),b.end())){
            cout << -1 << '\n';
            continue;
        }
        // cout << "L\n";
        sort(a1.begin(),a1.end());
        sort(b1.begin(),b1.end());
        int op=0;
        int f = 0;
        for(int i=0;i<n;i++){
            if(a1[i]>b1[i]){
                f = 1;
                break;
            }
        }
        if(f){
            cout << -1 << '\n';
            continue;
        }
        set<int> s;
        for(int i=0;i<n;i++) s.insert(i);
        vector<int> vv(n);
        for(int i=0;i<n;i++){
            int lb = lower_bound(b.begin(),b.end(),a[i])-b.begin();
            auto it = s.lower_bound(lb);
            vv[i] = *it;
            s.erase(it);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(vv[i]>vv[j]) op++;
            }
        }
        cout << op << '\n';


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