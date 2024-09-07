#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter any numner";
int n;
cin>>n;
cout<<"ENter the danger no";
int danger;
cin>>danger;
for(int i=1;i<=n;i++){

if(i==danger){
    cout<<"break executed";
    break;
    cout<<"walllah";
}
else if(i%3==0&&i%5==0){
    cout<<"FIZZBUZZ";
}
else if(i%5==0){
    cout<<"BUZZ";
}
else if(i%3==0){
    cout<<"fizz";

}
else{
    cout<<" ";
}

}

return 0;
}