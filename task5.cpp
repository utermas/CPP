#include <iostream>
 
using namespace std;
 
int main()
{
    int age;
    cout << "Введите возраст: ";
    cin >> age;
    cout << "Мне " << age;
    if (age > 4 && age < 21)
         cout << " Лет" << endl;
    else if (age % 10 == 1)
        cout << " Год" << endl;
    else if (age % 10 > 1 && age % 10 < 5)
        cout << " Года" << endl;
    else
        cout << " Лет" << endl;
    return 0;
}