#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }

    cout<<marks[2];
    cout<<marks<<endl;
    cout<<*marks<<endl;
    cout<<marks+1<<endl;
    cout<<*marks+1<<endl;
    cout<<*marks+3<<endl;
     marks[6] = 100;
    cout<<marks[6]<<endl;;
    cout<<marks[-1];
    
}