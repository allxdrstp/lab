#include <iostream>
using namespace std;
int main()
{
    float a, b, c, a1, f;
    cin >> a >> b >> c;
    a1 = abs(a-b)/2;
    f = sqrt(pow(a1, 2) + pow(c, 2));
    cout << a + b + 2 * f;
}