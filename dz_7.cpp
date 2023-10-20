#include <iostream>
using namespace std;
int main()
{
    float x1, x2, y1, y2, d;
    cin >> x1 >> y1 >> x2 >> y2;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << d;
}