#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    int sum=0;
  
    while(n!=0){
    
        sum = sum+(n%10);
        n=n/10;

    }
    cout<<sum;

}
