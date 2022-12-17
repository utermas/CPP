#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "N:";
    cin >> n;
 
    float a;
    cout << "A:";
    cin >> a;
 
    float b;
    cout << "B:";
    cin >> b;
 
    float h = (b - a) / n;
    cout << h;
 
    int i;
    for (i = 0; i <= n; ++i) {
        cout << a + i * h<<" ";
    }
}