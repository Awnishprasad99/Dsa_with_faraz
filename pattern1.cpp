#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;

int space = n-1;
int count = 1;
for(int i=1;i<=2*n-1;i++){

    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
  
    for(int k=1;k<=2*i-1;k++){
        cout<<count<<" ";
          count = count+1;
    }
    
    cout<<endl;

    if(i<=n){
      
        space = space-1;
    }
   


}

return 0;
}