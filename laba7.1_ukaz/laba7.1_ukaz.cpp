#include <iostream>

using namespace std;
// Написать функцию f(x,С), вычисляющую и возвращающую число Y, 
// полученное из целого числа x приписыванием к нему справа цифры С.
void f(int* k, int d) {
    int y = *k;
    int b = d;
    int digit = 0;

    while (b) {
        b = b / 10;
        digit++;
    }
    *k = *k * pow(10, digit) + d;
}

int main() {
    setlocale(LC_ALL, "RU");
    int x, c;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите С: ";
    cin >> c;
    f(&x, c);
    cout << "Y = " << x << endl;

    return 0;
}