#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	vector<char> v1(a.begin(), a.end());
	getline(cin, b);
	vector<char> v2(b.begin(), b.end());
	if (v1.size() > v2.size()) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

