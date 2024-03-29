
#include <iostream>
using namespace std;
//task x
int main() {
    int h, a, b;
    cout << "input h, a, b";
    if (h < b || a < b || a < 0 || b < 0 || h < 0) {
        return 0;
    }
    cin >> h >> a >> b;
    cout << (h - 2 * b + a - 1) / (a - b);
    return 0;
}
