
#include <iostream>
using namespace std;

int** form(int n) 
{
	int** mas = new int* [n];
	// идем по строкам и столбцам и добавляем элементы
	for (int i = 0; i < n; i++) {
		mas[i] = new int[n];
		for (int j = 0; j < n; j++)
			mas[i][j] = rand() % 10 - 5;
	}
	return mas;
}

void show(int n, int** mas)
{
	cout << "Массив: " << endl;
	// идем по строкам и столбцам и выводим элементы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << mas[i][j] << "  ";
		cout << endl;
	}
}

void swap(int n, int** mas, int row, int col)
{
	int temp;
	// в доп. переменную значение в строке
	// значению строки = значение столбца
	// значению столбца = доп.переменная
	for (int i = 0; i < n; i++) {
		temp = mas[row][i];
		mas[row][i] = mas[i][col];
		mas[i][col] = temp;
	}
}

void find(int n, int** mas) 
{
	int count = 0;
	for (int i = 1; i < n; i++)
		for(int j=0; j<n; j++)
			// если первый элемент строки равен первому столбца
			// меняем строку и столбец
			// выводим номера и массив
			if (mas[i][0] == mas[0][j]) {
				count++;
				swap(n, mas, i, j);
				cout << "Меняются строка №" << (i+1) << " и столбец №" << (j+1) << endl;
				show(n, mas);
			}
	if (count == 0)
		cout << "Ничего не поменялось" << endl;
	else
		cout << "Поменялось " << count << " шт." << endl;
}

int main()
{
	system("chcp 1251");
	srand((unsigned)time(0));
	int n;
	cout << "n? ";
	cin >> n;
	int** mas = form(n);
	show(n, mas);
	find(n, mas);
	show(n, mas);
}
