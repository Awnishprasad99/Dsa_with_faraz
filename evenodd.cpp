#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for (int i = 1; i <= n; i++)
    {
        int number;
        cin >> number;

        if (number % 2 == 0)
        {
            even = even + 1;
        }
        else if (number == 0)
        {
            even = even + 1;
        }
        else if (number % 2 != 0)
        {
            odd = odd + 1;
        }
        if (number > 0)
        {
            positive = positive + 1;
        }

        else if(number<0)
        {
            negative = negative + 1;
        }
    }
    cout << "Even:" <<" " << even <<endl;
    cout << "Odd:" << " " << odd <<endl;
    cout << "Positive:" << " " << positive<<endl;
    cout << "Negative:" << " " << negative;
}