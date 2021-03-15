

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	srand((unsigned)time(0));
	const int N = 100;
	int n, i, k, K;
	int arr[N], temp[N];
	do {
		cout << "n (MAX=100)? ";
		cin >> n;
	} while (n < 1 || n > N);
	cout << "Массив исходный: ";			// формируем и выводим
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100 - 50;
		cout << arr[i] << "  ";
	}
	cout << endl;
	bool res1 = false;
	for (i = n - 1, k = 0; i >= 0; i--) {	// ищем нужный, пропускаем его
		if (arr[i] == 0 && res1 == false)
			res1 = true;
		else
			temp[k++] = arr[i];				// переписываем в дополнительный
	}
	cout << "Удаление последнего 0: ";
	for (i = 0; i < k; i++) {
		arr[i] = temp[k-i-1];				// копируем обратно и выводим
		cout << arr[i] << "  ";
	}
	n = k;
	if (res1 == false)
		cout << "Нулевых элементов в массиве нет!" << endl;
	cout << endl;
	cout << "K? ";
	cin >> K;
	if (K < 0 || K > (n - 1)) {
		cout << "Неверный индекс" << endl;
		return 1;
	}
	for (i = 0, k = 0; i <= K; i++, k++)	// переписываем до индекса
		temp[k] = arr[i];
	temp[k++] = 100;						// добавляем новый
	for (i = K + 1; i < n; i++, k++)		// переписываем после индекса
		temp[k] = arr[i];
	n++;
	cout << "После добавления 100: ";
	for (i = 0; i < n; i++) {				// копируем обратно и выводим
		arr[i] = temp[i];
		cout << arr[i] << "  ";
	}
}