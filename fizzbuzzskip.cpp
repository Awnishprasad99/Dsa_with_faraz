#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the no" << endl;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (n % 4 == 0)
        {
            cout<<"time";
            continue;
        }
        else if (n % 3 == 0 && n % 5 == 0)
        {
            cout << "FIZZBUZZ";
        }
        else if (n % 3 == 0)
        {
            cout << "BUZZ";
        }
        else if (n % 5 == 0)
        {
            cout << "FIZZ";
        }
        else
        {
            cout << " ";
        }
    }
}