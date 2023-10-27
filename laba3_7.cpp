using namespace std;
#include <iostream>
#include <string>
#include <vector>

int main(){
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	vector <char> v1(a.begin(), a.end());
	vector <char> v2(b.begin(), b.end());
	vector <char> v3(c.begin(), c.end());
	if (v1.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << "The largest:" << a << endl;
	}
	if (v2.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << "The largest:" << b << endl;
	}
	if (v3.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << "The largest:" << c << endl;
	}
	if (v1.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << "The shortest:" << a << endl;
	}
	if (v2.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << "The shortest:" << b << endl;
	}
	if (v3.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << "The shortest:" << c << endl;
	}
}