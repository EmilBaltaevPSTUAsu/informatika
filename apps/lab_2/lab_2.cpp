
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	system("chcp 1251");
	double e = 0.0001, prev, curr, sum = 0;
	int n = 1;
	curr = 1.0 / ((3 * n - 2) * (3 * n + 1));  // первый элемент
	do {
		cout << "a(" << n << ") = " << curr << endl;
		
		prev = curr;	// запоминаем
		sum += curr;
		n++;
		curr = 1.0 / ((3 * n - 2) * (3 * n + 1));	// следующий
		// если разница между элементами больше точности
	} 	while (abs(curr - prev) > e);
	cout << "S = " << sum << ", n = " << n << endl;
}
