#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;

    int b = a;
    cout<<b;
    
    if(b>=65&&b<=90){
        cout<<"Entered alphabet is capital";
    }

    else if(b>=97&&b<=122){
        cout<<"Entered alphabet is small";
    }
    else {cout<<"May be you entered number or special character";}


    return 0;
}