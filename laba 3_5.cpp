using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	string str;
	getline(cin, str);
	vector<char> v1(str.begin(), str.end());
	if (v1.size() % 2 == 0) {
		cout << "true";
	}
	else {
		cout << "false";
	}

}