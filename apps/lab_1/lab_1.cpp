#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    double
        a = 1000,
        b = 0.0001,
        p1 = pow(a - b, 3),
        p2 = pow(a, 3),
        p3 = p1 - p2,
        p4 = pow(b, 3),
        p5 = 3 * a * pow(b, 2),
        p6 = 3 * pow(a, 2) * b,
        p7 = p4 - p5 - p6,
        p8 = p3 / p7;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "p1 = (a-b)^3 = " << p1 << endl;
    cout << "p2 = a^3 = " << p2 << endl;
    cout << "p3 = p1 - p2 = " << p3 << endl;
    cout << "p4 = b^3 = " << p4 << endl;
    cout << "p5 = 3ab^2 = " << p5 << endl;
    cout << "p6 = 3a^2b = " << p6 << endl;
    cout << "p7 = p4 - p5 - p6 = " << p7 << endl;
    cout << "Результат = p3 / p7 = " << p8 << endl;
}
