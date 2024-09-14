#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int sum = 0;
int numcopy = n;

while(numcopy!=0){
    int num = numcopy%10;
    int power = num*num*num;
    sum = sum+power;
    numcopy = numcopy/10;
}

if(n==sum){
    cout<<"Number is armstrong number";
}
else {
    cout<<"Number is not  armstrong number";
}

}