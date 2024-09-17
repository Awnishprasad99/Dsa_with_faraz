#include<bits/stdc++.h>
using namespace std;

bool palindrom(int x){
   if(x<0) return false;
   int copy_x=x;
   int rev_x = 0;
   while(copy_x){
    rev_x = rev_x*10+copy_x%10;
    copy_x = copy_x/10;
   }

   return (x == rev_x);


}

int main(){

    int n;
    cin>>n;
    if(palindrom(n)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
    
    

}