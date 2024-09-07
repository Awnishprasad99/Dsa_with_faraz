
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a ;
    cin>>b;

    int maxnum = max(a,b);

    while (true) {
        if (maxnum % a == 0 && maxnum % b == 0) {
            break;
        }
        maxnum++;
    }


    cout << "LCM of " << a << " and " << b << " is: " << maxnum << endl;

    return 0;
}