#include <iostream>
using namespace std;

int main() {
	int a, b, i, pr_1 = 1;
	long long pr_2 = 1, pr_3 = 1, pr_4 = 1;
	
	for (i = 8; i < 16; i++) {
		pr_1 = i * pr_1;
	}
	cout << pr_1 << endl;

	cout << "Please, input 1<a<20" << endl;
	cin >> a;

	for (i = a; i < 21; i++) {
		pr_2 = i * pr_2;
	}
	cout << pr_2 << endl;

	cout << "Please, input 1<b<20" << endl;
	cin >> b;

	for (i = 1; i <= b; i++) {
		pr_3 = i * pr_3;
	}
	cout << pr_3 << endl;

	cout << "Please, input a and b(b >= a)" << endl;
	cin >> a  >> b;
	for (i = a; i <= b; i++) {
		pr_4 = i * pr_4;
	}
	cout << pr_4 << endl;
}
