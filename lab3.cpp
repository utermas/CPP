#include <windows.h>
#include <iostream>
using namespace std;

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c;
    double Max, Min;
    cout << "Введите первое число a: ";
    cin >> a;
    cout << "Введите второе число b: ";
    cin >> b;
    cout << "Введите третье число c: ";
    cin >> c;
    if (a >= b && a >= c) Max = a;
    else if (b >= a && b >= c) Max = b;
    else  Max = c;

    if (a <= b && a <= c) Min = a;
    else if (b <= a && b <= c) Min = b;
    else Min = c;
    cout << "Наименьшее число: " << Min << endl;
    cout << "Наибольшее число: " << Max << endl;
}