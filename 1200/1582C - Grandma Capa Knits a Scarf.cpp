#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: chahat

bool pc(string s){
    int n= s.size();
    int i=0,j=n-1;
    int f = 0;
    while(i<=j){
        if(s[i]==s[j]){
            i++,j--;
        }
        else{
            f = 1;
            break;
        }
    }
    if(f) return false;
    return true;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i=0,j=n-1;
        int f = 0;
        if(pc(s)){
            cout << 0 << '\n';
            continue;
        }
        // if(n&1) cout << -1 << '\n';
        // else{
            f = 0;
            char xi,xj;
            int c1=0,c2=0;
            j = n-1;
            i=0;
            while(s[i]==s[j]){
                i++,j--;
            }
            // while(i>=0 && j<n){
            //     if(s[i]!=s[j]){
            //         xi = s[i];
            //         xj = s[j];
            //         break;
            //     }
            //     else{
            //         i--,j++;
            //     }
            // }
            xi = s[i];
            xj = s[j];
            int f1 = 0,f2=0;
            string x1="",x2="";
            int p=i,q=j;
            while(i<=j){
                if(s[i]==s[j]){
                    i++,j--;
                }
                else if(s[i]==xi){
                    c1++,i++;
                }
                else if(s[j]==xi){
                    c1++,j--;
                }
                else{
                    f1 = 1;
                    break;
                }
            }
            i=p,j=q;
            while(i<=j){
                if(s[i]==s[j]){
                    i++,j--;
                }
                else if(s[i]==xj){
                    c2++,i++;
                }
                else if(s[j]==xj){
                    c2++,j--;
                }
                else{
                    f2 = 1;
                    break;
                }
            }
            // for x1  -----i    j-----
            // for(int k=0;k<n;k++){
            //     if(s[k]==xi){
            //         c1++;
            //     }
            //     else{
            //         x1+=s[k];
            //     }
            // }
            // for(int k=j+1;k<n;k++){
            //     if(s[k]==xi){
            //         c1++;
            //     }
            //     else{
            //         x1+=s[k];
            //     }
            // }
// for x2
            // for(int k=0;k<n;k++){
            //     if(s[k]==xj){
            //         c2++;
            //     }
            //     else{
            //         x2+=s[k];
            //     }
            // }
            // for(int k=j;k<n;k++){
            //     if(s[k]==xj){
            //         c2++;
            //     }
            //     else{
            //         x2+=s[k];
            //     }
            // }
            // if(c1 && c2) cout << min(c1,c2) << '\n';
            // else cout << -1 << '\n';
            // cout << x1 << " " << x2 << '\n';
            // cout << "-------------" << endl;
            if(!f1 && !f2){
                cout << min(c1,c2) << '\n';
            }
            else if(!f1) cout << c1 << '\n';
            else if(!f2) cout << c2 << '\n';
            else cout << -1 << '\n';

        }

    // }
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