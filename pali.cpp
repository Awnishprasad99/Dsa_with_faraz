#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cop_n = n;
    int num = 0;
    while(cop_n){
    int a=cop_n%10;
    num = num*10+a;
    cop_n=cop_n/10;

    }
    if(n==num){
        cout<<num<<endl;
        cout<<"Yes";
    }
    else{
        cout<<num<<endl;
        cout<<"NO";
    }
}