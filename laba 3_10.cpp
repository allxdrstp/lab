using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	string str = "Can you can a can as a canner can can a can?",str1;
	getline(cin, str1);
	vector<char> v1(str.begin(), str.end());
	vector<char> v3(str1.begin(), str1.end());
	vector<char> v2;
	int i = 0;
	while (i < v1.size()) {
		if ((v1[i] == 'c' or v1[i] == 'C') and v1[i + 1] == 'a' and v1[i + 2] == 'n' and (v1[i + 3] == ' ' or v1[i + 3] == '?')) {
			
			for (char u : v3) {
				v2.push_back(u);
			}
			i = i + 3;
		}
		else {
			v2.push_back(v1[i]);
			i = i + 1;
		}
	}
	for (char f : v2) {
		cout << f;
	}



}