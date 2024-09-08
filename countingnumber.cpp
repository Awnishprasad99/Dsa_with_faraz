#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number to check the counting of how many digit";
    int n;
    cin>>n;
    int count = 0;

    while(n!=0){
        n=n/10;
    count = count+1;

    }

    cout<<count;

    return 0;

}