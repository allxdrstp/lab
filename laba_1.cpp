#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x % 2 == 0 and y % 2 == 0) {
		cout << "1 condition is true" << endl;
	}
	else {
		cout << "1 condition is false" << endl;
	}
	if ((x < 20 and y >= 20) or (x >= 20 and y < 20)) {
		cout << "2 condition is true" << endl;
	}
	else {
		cout << "2 condition is false" << endl;
	}
	if (x == 0 or y == 0) {
		cout << "3 condition is true" << endl;
	}
	else {
		cout << "3 condition is false" << endl;
	}
	if (x < 0 and y < 0 and z < 0) {
		cout << "4 condition is true" << endl;
	}
	else {
		cout << "4 condition is false" << endl;
	}
	if ((x % 5 == 0 and y % 5 != 0 and z % 5 != 0) or (x % 5 != 0 and y % 5 == 0 and z % 5 != 0) or (x % 5 != 0 and y % 5 != 0 and z % 5 == 0)) {
		cout << "5 condition is true" << endl;
	}
	else {
		cout << "5 condition is false" << endl;
	}
	if (x > 100 or y > 100 or z > 100) {
		cout << "6 condition is true" << endl;
	}
	else {
		cout << "6 condition is false" << endl;
	}
}