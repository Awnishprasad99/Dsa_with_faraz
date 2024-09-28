#include<bits/stdc++.h>
using namespace std;

int whichisgreater(int a,int b){

    if(a>b){
        return a ;
    }
    else if(b>a){
        return b;
    }

}
int main(){

    int a,b;
    cin>>a>>b;
    cout<<whichisgreater(a,b);


return 0;
}