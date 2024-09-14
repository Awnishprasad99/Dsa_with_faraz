#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int sum=0;

    cin>>a;
 
 
  while(a!=0){
    a=a%10;
   
    int power = pow(a,3);
   
    sum = sum + power;
      a=a/10;
      
  }
  cout<<sum;
  return 0;
}