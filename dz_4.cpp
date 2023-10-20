#include <iostream>
using namespace std;
int main()
{
    int a,x,y;
    cin >> a;
    x = 12 * pow(a, 2) + 7 * a - 12;
    y = 3 * pow(x, 3) + 4 * pow(x, 2) - 11 * x + 1;
    cout << x << ' ' << y;
}