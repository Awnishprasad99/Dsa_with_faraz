#include<bits/stdc++.h>
using namespace std;
int main(){

int n ;
cin>>n;

for(int i=0;i<=n;i++)
{
    if(n%4==0){
        continue;
    }
    else if(n%3==0&&n%5==0){
        cout<<"fizz buzz";
    }
    else if(n%3==0){
        cout<<"fizz";
    }
    else if(n%5==0){
        cout<<"buzz";
    }

}

}