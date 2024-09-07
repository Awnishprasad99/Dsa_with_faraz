#include<bits/stdc++.h>
using namespace std;
int main(){

cout<<"Enter any number"<<endl;
int n;
cin>>n;

for(int i=0; i<=n; i++){
    if(n%5==0&&n%3==0){
        cout<<"FIZZBUZZ";
        break;

    }
    else if(n%5==0) {
        cout<<"BUZZ";
        break;
        

        
}
else if(n%3==0){
    cout<<"FIZZ";
    break;
}

else{
    cout<<"";
}

}

return 0;
}