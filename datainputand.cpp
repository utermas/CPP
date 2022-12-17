#include <iostream>
using namespace std;
 
int main() {
 setlocale(LC_ALL, "Russian");
 
 int K, m, N;
 cout << "K:";
 cin >> K;
 cout << endl;
 cout << "N:";
 cin >> N;
 cout << endl;
 N = N - 2;
 m = ((K + N) % 6) + 1;
 cout <<"Day of the week number: "<< m;
}