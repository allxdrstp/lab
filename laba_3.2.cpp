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
    int a = 0;
    for (int i = 0; i < 10; ++i) {
        a += m[i];
    }
    cout << endl << endl << "Сумма массива:" << endl << a;
    int b = pow(m[0],2);
    for (int i = 1; i < 10; ++i) {
        b += pow(m[i],2);
    }
    cout << endl << endl << "Сумма квадратов массива:" << endl << b;
    int с = m[0];
    for (int i = 1; i < 6; ++i) {
        с += m[i];
    }
    int k1, k2;
    cout << endl << endl << "Сумма первых 6 чисел массива:" << endl << с << endl;
    cout << endl << "Введите k1 k2:" << endl;
    cin >> k1 >> k2;
    if (k1<0 or k2>9 or k2<k1) {
        cout << "Введите верное значение k1 k2" << endl;
        return 0;
    }
    int d = 0;
    for (int i = k1; i <= k2; ++i) {
        d += m[i];
    }
    cout << endl << "Сумма первых k1-k2 чисел массива:" << endl << d;
    float f = 0;
    for (int i = 0; i < 10; ++i) {
        f += m[i];
    }
    cout << endl << endl << "Среднее арифметическое массива:" << endl << f / 10 << endl;
    int s1, s2;
    cout << endl << "Введите s1 s2:" << endl;
    cin >> s1 >> s2;
    if (s1 < 0 or s2>9 or s2 < s1) {
        cout << "Введите верное значение s1 s2" << endl;
        return 0;
    }
    float g = 0;
    for (int i = s1; i <= s2; ++i) {
        g += m[i];
    }
    cout << endl << "Среднее арифметическое s1-s2:" << endl << g/(s2-s1+1)<<endl;
}