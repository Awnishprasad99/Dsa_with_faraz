// #include<bits/stdc++.h>
// using namespace std;
// int main(){



// int marks;
// cin>>marks;

// if(marks>30){
//     cout<<"you passed";
// }else{
//     cout<<"you fail";
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
int b;
int c;

cin>>a;
cin>>b;
cin>>c;

if(a>b&&a>c)
{
    cout<<a;
}

else if(b>c&&b>a){
    cout<<b;
}

else if(c>a&&c>b){
    cout<<c;

}

else if(a=b=c)
{
    cout<<"no are equal";
}


}