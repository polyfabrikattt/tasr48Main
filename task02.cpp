#include <iostream>
using namespace std;
//task02
int main() {
    int num;
    cout << "input you number";
    cin >> num;
    if (num < 0 || num>9999) {
        return false;
    }
    int a = num, x = 0;
    while (a)
    {
        x = x * 10 + a % 10;
        a /= 10;
    }
    if (x == num)
        cout << "Its polindrom " << endl;
    else
        cout << "Its  not polindrom " << endl;
    return 0;
}
