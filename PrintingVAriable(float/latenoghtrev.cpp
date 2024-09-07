#include<iostream>
using namespace std;

int main() {
    int x = 8, y = 12;

    if (x < y) {
        if (x % 3 == 0) {
            cout << "A";
        } else {
            if (y % 4 == 0) {
                cout << "B";
            } else {
                cout << "C";
            }
        }
    } else {
        cout << "D";
    }
    return 0;
}