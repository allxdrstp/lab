#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double m[10];
    srand(time(NULL));
    cout << "Начальный массив:" << endl;
    for (int i = 0; i < 10; ++i) {
        m[i] = rand() % 99 + 1;
        cout << m[i] << " ";
    }
    cout << endl << endl << "Массив, увеличенный в 2х:" << endl;
    for (int i = 0; i < 10; ++i) {
        m[i] = m[i] * 2;
        cout << m[i] << " ";
    }
    int a;
    cout << endl << endl << "Введите число а" << endl;
    cin >> a;
    cout << endl << "Массив, деленный на а:" << endl;
    for (int i = 0; i < 10; ++i) {
        m[i] = m[i] / a;
        cout << m[i] << " ";
    }
    int b = m[0];
    cout << endl << endl << "Массив, деленный на 1й элемент:" << endl;
    for (int i = 0; i < 10; ++i) {
        m[i] = m[i] / b;
        cout << m[i] << " ";
    }
    cout << endl << endl;
}