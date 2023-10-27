using namespace std;
#include <iostream>
#include <vector>
#include <string>

int main() {
	string a;
	string b;
	getline(cin, a);
	vector <char> v1(a.begin(), a.end());
	int d = v1.size();
	for (int i = 0; i < d; ++i) {
		b += '*';
	}
	cout << b << a << b;
}