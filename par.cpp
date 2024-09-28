#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int fact=0;
	for(int i=2;i<=x-1;i++){
		if(x%i==0)fact++;
	}
	if(fact==0)cout<<"YES";
	else cout<<"NO";
	return 0;
}