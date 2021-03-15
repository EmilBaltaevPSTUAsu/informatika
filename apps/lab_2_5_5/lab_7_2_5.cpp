
#include <iostream>
using namespace std;

double f(double x) {
    double res = x - 1.0 / (3.0 + sin(3.6 * x));
    return res;
}

double HalfDiv(double a, double b, double e, double (*func) (double)) {
    double curr = 0;
    while ((b - a) / 2 > e) {
        curr = (a + b) / 2;
        if ((func(a) * func(curr)) < 0) 
            b = curr;
        else
            a = curr;
    }
    return curr;
}

int main()
{
    system("chcp 1251");
    double e = 0.001, y = 0.2624;
    double a = 0.0, b = 0.85;
    double res = HalfDiv(a, b, e, f);
    cout << "Точное значение: " << y << endl;
    cout << "Значение методом половинного деления: " << res << endl;
}
