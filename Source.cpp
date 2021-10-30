#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a1;
    int d;
    cout << "Введите значение первого элемента: ";
    cin >> a1;
    cout << "Введите значение разности: ";
    cin >> d;
    const int size = 50;
    int mas[size];
    mas[0] = a1;
    for (int i = 1; i < size; i++) {
        mas[i] = mas[i - 1] + d;
    }
    for (int j = 0; j < size; j++) {
        cout << mas[j] << ' ';
    }
    return 0;
}