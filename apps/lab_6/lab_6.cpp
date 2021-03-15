#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

const int MAX = 255;

void trim(char* str)
{
    char temp[MAX];
    int k = 0;
    for (int i = 0; i < strlen(str); i++) {
        // пропускаем пробелы до слова
        while (i < strlen(str) && str[i] == ' ')
            i++;
        if (i == strlen(str))
            break;
        // копируем слово
        while (i < strlen(str) && str[i] != ' ') {
            temp[k] = str[i];
            k++;
            i++;
        }
        if (i == strlen(str))
            break;
        // пробел между словами
        temp[k++] = ' ';
    }
    if (temp[k - 1] == ' ')
        temp[k - 1] = '\0';
    else
        temp[k] = '\0';
    str = strcpy(str, temp);
}

void sort(char* str)
{
    char temp; 
    // Сортировка массива пузырьком
    for (int i = 0; i < strlen(str) - 1; i++) {
        for (int j = 0; j < strlen(str) - i - 1; j++) {
            // если пред. больше следующего
            // то меняем местами элементы
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
    system("chcp 1251");
    char str[MAX];
    gets_s(str);
    trim(str);
    cout << "Удаление пробелов: " << str << endl;
    sort(str);
    cout << "Сортировка по возрастанию: " << str << endl;
    return 0;
}
