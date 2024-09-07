#include<bits/stdc++.h>
using namespace std;
int main(){

cout<<"Enter your number to see what grade you got"<<endl;

int num;
cin>>num;

if(num>91){
    cout<<"A";
}

if(num>71&&num<=81)
{
    cout<<"b";
}


if(num>81&&num<=91)
{
    cout<<"c";
}

if(num>61&&num<=71)
{
    cout<<"d";
}

if(num>51&&num<=61){
    cout<<"e";
}

if(num<=51)
{
    cout<<"you fail";
}


}

// if you rearrange the order still it works