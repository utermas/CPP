#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand((int)time(0));
    int N, count = 0;
    cout << "N="; cin >> N;

    double* a = new double[N];

    cout << "Введите " << N << " элемент(ов):\n";
    for (int i = 0; i < N; i++)
        cin >> a[i];

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << "\n";

    for (int i = N - 1; i > 0; i--)
        if (a[i] > a[i - 1]) { count++; cout << i + 1 << " "; }

    cout << "\ncount=" << count << "\n";

    delete[]a;
    system("pause");
    return 0;
}