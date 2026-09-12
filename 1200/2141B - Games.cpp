// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// //:__: aditya_up62

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         int a,b;
//         cin >> a >> b;
//         int p = 0;
//         vector<int> A(a);
//         vector<int> B(b);
//         for(int i=0;i<a;i++){
//             cin >> A[i];
//         }
//         for(int i=0;i<b;i++){
//             cin >> B[i];
//         }
//         sort(A.begin(),A.end());
//         sort(B.begin(),B.end());
//         int i=0,j=0;
//         while(1){
//             if(A[i] == B[j]){
//                 p++;
//                 i++;
//                 j++;
//             }
//             else if(A[i]>B[j]){
//                 j++;
//             }
//             else{
//                 i++;
//             }
//             if(i == a || j == b) break;
//         }
//         a -= p;
//         b -= p;
//         a++;
//         b++;
//         if(a>b) cout << min(a,b)*2 << '\n';
//         else cout << min(a,b)*2 - 1 << '\n';

//     }
// }

//     : code converted to Kotlin  : for cpp scroll up ^:^

// import java.util.StringTokenizer

// fun main() {
//     val br = System.`in`.bufferedReader()
//     val out = StringBuilder()

//     val t = br.readLine().toInt()
//     repeat(t) {
//         val st1 = StringTokenizer(br.readLine())
//         var a = st1.nextToken().toInt()
//         var b = st1.nextToken().toInt()

//         val A = br.readLine().split(" ").map { it.toInt() }.toMutableList()
//         val B = br.readLine().split(" ").map { it.toInt() }.toMutableList()

//         A.sort()
//         B.sort()

//         var i = 0
//         var j = 0
//         var p = 0

//         while (true) {
//             if (A[i] == B[j]) {
//                 p++
//                 i++
//                 j++
//             } else if (A[i] > B[j]) {
//                 j++
//             } else {
//                 i++
//             }
//             if (i == a || j == b) break
//         }

//         a -= p
//         b -= p
//         a++
//         b++

//         if (a > b) out.append("${minOf(a, b) * 2}\n")
//         else out.append("${minOf(a, b) * 2 - 1}\n")
//     }

//     print(out.toString())
// }



// // /*
// // ⠀⠀⠀⠀⠀⠀⣠⠴⠲⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// // ⠀⠀63⠀⠀⣏⢸⣿⠆⣿⣿⡟⡓⢤⣀⣀⠀⢀⡀
// // ⠠⠞⠙⠱⡆⠀⠉⠲⢶⣾⣿⣿⣷⣵⣾⣿⣿⣿⠆⠀
// // ⠀⠀⠀⣰⠏⠀⠀⣰⣿⣿⣿⣿⣿⣿⡿⠿⠛⠁⠀⠀
// // ⠀⢀⡼⠁⠀⣠⣾⣿⣿⣿⣿⣿⣿⡯⠀⠀⠀⠀⠀⠀
// // ⠀⡞⠀⠀⣴⣿⣿⣿⣿⡛⠿⢿⣿⣿⡄⠀⠀⠀⠀⠀
// // ⢸⡃⠀⢸⣿⣿⣿⣿⣿⣿⣿⣮⠙⠛⠿⣇⠀⠀⠀⠀
// // ⠘⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡂⠀⠀⠈⠀⠀⠀⠀
// // ⠀⠈⠓⠜⢿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀
// // ⠀⠀⠀⠀⠀⠙⠙⠻⠿⠿⠿⠿⠶⠶⠀⠀⠀⠀⠀⠀
// // */
