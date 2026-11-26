// #include<bits/stdc++.h>
// using namespace std;
// void check(string s,int &jj){
//     long long f = stoll(s);
//     if(f%9==0){
//         jj = 1;
//     }
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         int jj = 0;
//         string s = to_string(n);
//         for(int i=0;i<s.size();i++){
//             if((s[i]-'0')>=4){
//                 continue;
//             }
//             else{
//                 int p = s[i] - '0';
//                 p = p*p;
//                 string temp = s.substr(0, i) + to_string(p) + s.substr(i+1);
//                 check(temp,jj);
//             }
//             if(jj==1) break;
//         }
//         if(jj==0) cout << "NO\n";
//         else cout << "YES\n";

//     }
// }

#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int n = s.size();
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        a[i] = s[i] - '0';

    // Try all combinations of squaring digits < 4
    // 2^n subsets
    int total = 1 << n;

    for (int mask = 0; mask < total; ++mask) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int val = a[i];
            if ((mask >> i) & 1) {
                if (val < 4) val = val * val;
                else continue; // can't square
            }
            sum += val;
        }
        if (sum % 9 == 0)
            return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
