#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    vector <int> v;
    vector <int> v1;
    for (int i = 0; i < 10; ++i) {
        b = rand() % 2;
        if (b == 0) {
            a = (rand() % 99 + 1) * (-1);
        }
        else {
            a = (rand() % 99 + 1);
        }
        v.push_back(a);
        cout << a << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; ++i) {
        a = rand() % 99 + 1;
        v1.push_back(a);
        cout << v1[i] << " ";
    }
    int c = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < 0) {
            v.erase(v.begin() + i);
            ++c;
            if (c == 2) {
                break;
            }
        }
    }
    int k = 0;
    for (int i = v1.size() -1; i > 0; --i) {
        if (v1[i] % 2 == 0) {
            v1.erase(v1.begin() + i);
            ++k;
            if (k == 1) {
                break;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << ' ';
    }
}
