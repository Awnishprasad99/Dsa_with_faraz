#include<bits/stdc++.h>
using namespace std;

int sum(int n){

int add=0;
while(n>0){
   int a=n%10;
    add = add+a;
    n=n/10;
}
   
  return add;  

}
int main (){
    int n;
    cin>>n;

    cout<<sum(n);

    return 0;
}