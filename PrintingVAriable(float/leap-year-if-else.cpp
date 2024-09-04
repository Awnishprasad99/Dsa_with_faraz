#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the year you want to check whether year is leap or not" << endl;
    cout << "Enter the  year" << " ";
    int year;
    cin >> year;
    if (year % 4 == 0)
    {
        // this is true
        if (year % 100 == 0)
        {
            // this is true
            if (year % 400 == 0)
            {
                cout << year << "year is leap year";
            } 
            
            else
            {
                cout << year << "This year is  not leap";
            }
        }
        else
        {
            cout << year  <<" "<< "Year is leap year";
        }
    }
    else
    {
        cout << year << "year is not leap";
    }
}