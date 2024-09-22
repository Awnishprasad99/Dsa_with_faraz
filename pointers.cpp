#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *ptr = &a;
    cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    
    int **ptrPtr = &ptr;
    cout<<ptrPtr<<endl;
    cout<<*ptrPtr<<endl;
    cout<<**ptrPtr;

    int ***ptrptrptr = &ptrPtr;
    cout<<ptrptrptr<<endl;
    cout<<***ptrptrptr<<endl;
    cout<<**ptrPtr<<endl;
    cout<<*ptr<<endl;

    
    

  
    // cout<<sizeof(ptrptr);



    return 0;

}