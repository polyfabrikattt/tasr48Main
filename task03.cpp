
#include <iostream>
using namespace std;
//task 03
int main()
{
	int v, t;
	cout << "input t and v";
	cin >> v >> t;
	if (v < 0 || t < 0) {
		cout << 0;
	}
	else {
		int num = ((56 + v * t % 56) % 56);

		cout << num;
		return 0;
	}
}
