#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

const int MAXN = 10000005;
vector<int> spf(MAXN);
void SPF(){
    for(int i=1;i<MAXN;i++){
        spf[i] = i;
    }
    for(int i=4;i<MAXN;i+=2){
        spf[i] = 2;
    }
    for(int i=3;i*i<MAXN;i+=2){
        if(spf[i]==i){
            for(int j=i*i;j<MAXN;j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    SPF();
    int t=1;
    // cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<m;i++) cin >> b[i];
        map<int,int> mp1,mp2,mp3;
        for(int i=0;i<n;i++){
            int p = a[i];
            while(p>1){
                int x = spf[p];
                int c = 0;
                while(p%x==0){
                    p /= x;
                    c++;
                }
                mp1[x] += c;
            }
        }
        for(int i=0;i<m;i++){
            int p = b[i];
            while(p>1){
                int x = spf[p];
                int c = 0;
                while(p%x==0){
                    p /= x;
                    c++;
                }
                mp2[x] += c;
            }
        }
        for(auto &i : mp1){
            mp3[i.first] = min(mp1[i.first],mp2[i.first]);
        }
        mp1=mp2=mp3;
        for(int i=0;i<n;i++){
            int x = a[i];
            while(x>1){
                int p =spf[x];
                int c = 0;
                while(x%p==0) c++,x /= p;
                c = min(c,mp1[p]);
                mp1[p] -= c;
                while(c--) a[i] /= p;
            }
        }
        for(int i=0;i<m;i++){
            int x = b[i];
            while(x>1){
                int p =spf[x];
                int c = 0;
                while(x%p==0) c++,x /= p;
                c = min(c,mp2[p]);
                mp2[p] -= c;
                while(c--) b[i] /= p;
            }
        }
        cout << n << " " << m << '\n';
        for(auto &i : a) cout << i << " ";
        cout << endl;
        for(auto &i : b) cout << i << " ";

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