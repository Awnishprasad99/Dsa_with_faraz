#include<bits/stdc++.h>
using namespace std;
int main(){


cout<<"Enter the no to check whether no is priime or not"<<endl;

int n;
cin>>n;

for(int i=2;i<10;i++){

    if(n%i==0){
        cout<< n<<" "<<" not prime";
        break;
    }

     if(n%i!=0)
    {
        cout<<n<<" "<<"prime";
        break;
    }
return 0;
}





}