// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int X, Y;
   
// //     cin >> X;
   
// //     cin >> Y;

// //     int total_penalty = X + (Y * 10);

// //     cout << total_penalty << endl;

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     unordered_set<int> cs;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         cs.insert(a[i]); 
//     }


//     unordered_map<int, int> m;
//     for (int num : a) {
//         m[num]++;
//         if (m[num] > 1) {
//             cout << "1"<<endl << num << endl;
//             return;
//         }
//     }


//     cout <<"-1"<<endl;
// }

// int main() {
    

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//       int sum =0;
//         for(int i=0;i<n;i++){
//             sum+=a[i]-1;
//         }
//   cout<<sum<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        bool found = false;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) { 
                b.push_back(a[i] + a[j]);
                if(b[i] == a[j]) {
                    found = true;
                    cout<<a[i]<<" "<< a[j]<<endl;
                    break;
                }
            }
            if(found) {
                break;
            }
            else {
                cout << "-1" << endl;
            }
            
            
        }
        
    }
    }
