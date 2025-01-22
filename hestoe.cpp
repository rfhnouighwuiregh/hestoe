#include <iostream>
#include <clocale> // Для установки локали

using namespace std;

int main() {
    // Установка локали для поддержки русского языка
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;

    // Ввод числа
    cout << "Введите число: ";
    cin >> n;

    // Размерность массива
    const int rows = 3, cols = 3; // Размеры массива (можно изменить)

    // Создание массива
    int array[rows][cols];

    // Заполнение массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                array[i][j] = n; // Первый элемент равен введенному числу
            }
            else {
                array[i][j] = array[i][j - 1] * 2; // Каждый следующий элемент умножается на 2
            }
        }
    }

    // Вывод массива
    cout << "Сгенерированный массив:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}