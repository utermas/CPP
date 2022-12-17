#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
 
int main()
{
    int n = 4, m = 3, x = 0, y = 0;
 
    vector <int> q(n, 0);
    vector < vector <int> > matrix(m, q);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] < matrix[y][x])
            {
                y = i;
                x = j;
            }
        }
    matrix.erase(matrix.begin()+y);
    for (int i = 0; i < m-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

