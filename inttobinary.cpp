#include<bits/stdc++.h>
using namespace std;

 int bin(int n){
        if(n>1){
        bin(n/2);
        
        }
        cout<<n%2;
 }



int main(){

    cout<<"Enter the year month and date"<<endl;

    cout<<"Enter the year";
    int year;
    cin>>year;
   

    cout<<"Enter the month";
    int month;
    cin>>month;
 

    cout<<"Enter the date";
int date;
cin>>date;

cout<<bin(year)<<"-"<<bin(month)<<"-"<<bin(date);
    
   
    }
