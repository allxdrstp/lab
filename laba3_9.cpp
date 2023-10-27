#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string a;
	int d;
	int f = 0;
	getline(cin, a);
	vector <char> v1(a.begin(), a.end());
	d = v1.size();
	for (int i = 0; i < d; ++i) {
		if ('a' == v1[i] or 'A' == v1[i]) {
			++f;
		}
	}
	cout << f * 100 / v1.size() << "%";
}
