// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Input for 'n', the number of iterations
//     int comp = 0; // 'comp' initialized outside the loop to retain its value

//     for (int i = 1; i <= n; i++) {
//         int num;
//         cin >> num;  // Input the number to compare

//         if (num > comp) {
//             comp = num;  // Update 'comp' if 'num' is greater
//         }
//     }
    
//     cout << comp; // Print the maximum number after the loop ends
// }






















#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int comp = 0;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        if(num>comp){
            comp=num;
        }
        
    }
    cout<<comp;
}