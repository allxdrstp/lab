#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int a, b;
    vector <int> v;
    
    for (int i = 0; i < 10; ++i) {
        b = rand() % 2;
        if (b == 0) {
            a = (rand() % 99 + 1) * (-1);
        }
        else {
            a = (rand() % 99 + 1);
        }
        v.push_back(b);
        cout << a << " ";
    }
    
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] != abs(v[i])) {
            v.erase(v.cbegin() + i);
            break;
        }
    }
    int k = 0;
    
    for (int i = v.size()-1; i > 0; --i) {
        ++k;
        if (v[i] % 2 == 0) {
            v.erase(v.cend() - k);
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < v.size()-1; ++i) {
        cout << v[i] << ' ';
    }
}