#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number you want to print table";
    int n;
    
    cin>>n;
    for(int i=1;i<=10;i++){
        int a = n*i;
        cout<<n<<"*"<<i<<" "<<"="<<" "<<a<<endl;
    }
}
