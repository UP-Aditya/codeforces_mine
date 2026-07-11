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
        int a,b;
        cin >> a >> b;
        vector<int> v(a);
        int c7=0,c2023=0,c17=0,c289=0;
        for(int i=0;i<a;i++){
            cin >> v[i];
            if(v[i]==7) c7++;
            else if(v[i]==289) c289++;
            else if(v[i]==17) c17++;
            else if(v[i]==2023) c2023++;
        }
        if(c2023>=1 || (c289>0 && c7>0) || (c17>1 && c7>0)){
            cout << "YES\n" << 1 << '\n';
        }
        else{
            if(b==1){
                if(c289>=1){
                    cout << "YES\n";
                    cout << 7 << '\n';
                }
                else if(c17>=2){
                    cout << "YES\n";
                    cout << 7 << '\n';
                }
                else if(c2023>=1){
                    cout << "YES\n";
                    cout << 1 << '\n';
                }
                else if(c7>=1 && c17>=1){
                    cout << "YES\n";
                    cout << 17 << '\n';
                }
                else{
                    cout << "NO\n";
                }
            }
            else if(b==2){
                if(c289>=1){
                    cout << "YES\n";
                    cout << 1 << " " << 7 << '\n';
                }
                else if(c17>=1){
                    cout << "YES\n";
                    cout << 7 << " " << 17 << '\n';
                }
                else if(c2023>=1){
                    cout << "YES\n";
                    cout << 1 << '\n';
                }
                else if(c7>=1){
                    cout << "YES\n";
                    cout << 17 << " " << 17 << '\n';
                }
                else{
                    cout << "NO\n";
                }
            }
            else{
                if(c289>=1){
                    cout << "YES\n";
                    cout << 1 << " " << 7 << '\n';
                }
                else if(c17>=1){
                    cout << "YES\n";
                    cout << 7 << " " << 17 << '\n';
                }
                else if(c2023>=1){
                    cout << "YES\n";
                    cout << 1 << '\n';
                }
                else if(c7>=1){
                    cout << "YES\n";
                    cout << 17 << " " << 17 << '\n';
                }
                else{
                    cout << "YES\n";
                    cout << 7 << " " << 17 << " " << 17 << '\n';
                }
            }
        }
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