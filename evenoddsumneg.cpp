#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        int n;
        cin>>n;
        
    if(n%2==0){
        cout<<"even no";
    }
   else if(n%2!=0){
        cout<<"odd no";
    }
    else if(n>0){
        cout<<"negative";
    }
    else if(n<0){
        cout<<"positive";
    }
    }

}