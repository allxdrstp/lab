#include <iostream>
using namespace std;


int main() {
	int x = 1, z = 1, y;
	while (x < 10) {
		cout << "7 * " << x << " = " << 7 * x << endl;
		x++;
	}

	cin >> y;
	while (z< 10) {
		cout << y << " * " << x << " = " << y * x << endl;
		z++;
	}
}