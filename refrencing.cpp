#include<bits/stdc++.h>
using namespace std;

 *int ref(int *a , int *b){
 
e=*a;
f=*b;
c=e+f;
return c;
}
int main(){

    int a,b;
    cin>>a>>b;

    cout<<ref(&a,&b)<<endl;

    return 0;

}