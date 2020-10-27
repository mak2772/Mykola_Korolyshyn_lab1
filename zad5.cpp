#include <iostream>
using namespace std;

int main()
{
    int r = 2, k = 3;
    int a[2][3], b[2][3], sum[2][3];
    int i, j;
 
   

    cout << endl << "Podaj elementy pierwszej macierzy: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < k; ++j)
       {
           cout << "Podaj element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Podaj elementy drugiej macierzy: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < k; ++j)
       {
           cout << "Podaj element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < k; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Suma dwóch macierzy to: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < k; ++j)
        {
            cout << sum[i][j] << "  ";
             if(j == k - 1)
               cout << endl;
        }

    return 0;
}