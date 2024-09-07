#include<iostream>
using namespace std;

int main() {
    int a = 42, b = 18, c = 21, d = 9;

    if (a % b == 0) {
        if (c % d != 0) {
            if ((a + b + c) % d == 0) {
                cout << "P";
            } else {
                if (b + c > a) {
                    cout << "Q";
                } else {
                    cout << "R";
                }
            }
        } else {
            if ((a * b) % (c + d) == 0) {
                cout << "S";
            } else {
                cout << "T";
            }
        }
    } else {
        if (a + d == b + c) {
            cout << "U";
        } else {
            cout << "V";
        }
    }

    return 0;
}