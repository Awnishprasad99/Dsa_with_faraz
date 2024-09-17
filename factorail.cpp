#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 15)
    {
        while (n != 0)
        {
            int num;
            cin >> num;
            if (num <= 20)
            {
                long long fact = 1;
                for (int j = 1; j <= num; j++)
                {
                    fact = fact * j;
                }
                cout << fact << endl;
                n--;
            }
        }
    }
}