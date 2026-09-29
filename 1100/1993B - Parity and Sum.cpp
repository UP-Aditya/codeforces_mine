#include<bits/stdc++.h>
using namespace std;
#define int long long
//:__: aditya_up62

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int ec=0,oc=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]&1) oc++;
            else ec++;
        }
        int c = 0;
        if(ec==0 || oc==0) cout << 0 << "\n";
        else{
            vector<int> df;
            int p = 0;
           for(int i=0;i<n;i++){
                if(!(v[i]&1)) df.push_back(v[i]);
                else{
                    p = max(p,v[i]);
                }
            }
            sort(df.begin(),df.end());
            int f = *max_element(df.begin(),df.end());
            int i=0;
            while(i != df.size()){
                if(p>df[i]){
                    p = max(df[i],p+df[i]);
                    c++;
                }
                else{
                    c += 2;
                    p += f;
                }
                i++;
            }
            cout << c << '\n';
        }
        

    }
}


/*
      ⣠⠴⠲⢤⡀         
  63  ⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀ ⢀⡀
⠠⠞⠙⠱⡆ ⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆ 
   ⣰⠏  ⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁  
 ⢀⡼⠁ ⣠⣾⣿⣿⣿⣿⣿⣿⡯      
 ⡞  ⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄     
⢸⡃ ⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇    
⠘⣆ ⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂  ⠈    
 ⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟        
     ⠙⠙⠻⠿⠿⠿⠿⠶⠶      
*/