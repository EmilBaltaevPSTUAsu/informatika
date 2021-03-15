
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double
		prev, curr, sN, sE, Y, fact, i,
		a = 0.1, b = 1, k = 10, h = (b - a) / k,
		e = 0.0001, n = 10;
	for (double x = a; x <= b; x += h) {
		Y = cos(x);
		sN = 1;
		fact = 1;
		for (double i = 1; i <= n; i++) {
			fact *= 2 * i;
			sN += pow(-1.0, i) * (pow(x, 2 * i)) / fact;
		}
		sE = 0;
		fact = 1;
		curr = 1;
		double i = 0;
		do {
			prev = curr;
			sE += curr;
			i++;
			fact *= 2 * i;
			curr = pow(-1.0, i) * (pow(x, 2 * i)) / fact;
		} while (abs(prev - curr) > e);
		cout << "X = " << x << "\t";
		cout << "SN = " << sN << "\t";
		cout << "SE = " << sE << "\t";
		cout << "Y = " << Y << endl;
	}
}