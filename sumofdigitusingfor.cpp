#include<bits/stdc++.h>
using namespace std;
int main(){
   std:: cout<<"Enter the number";
    int n;
   std:: cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        while(n!=0){
            sum = sum+(n%10);
            n=n/10;
            

        }
    }
    cout<<sum;
}