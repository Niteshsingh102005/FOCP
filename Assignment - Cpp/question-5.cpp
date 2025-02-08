// question-5
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int mat[50][50];

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int i = 0, j = 0;

    while (i < n && j < n) {
        for (int k = j; k < n; k++) {
       cout << mat[i][k] << " ";
    }
   i++;

    for (int k = i; k < n; k++) {
       cout << mat[k][n - 1] << " ";
    }
    n--;

    if (i < n) {
        for (int k = n - 1; k >= j; k--) {
            cout << mat[n][k] << " ";
        }
       n--;
    }

   if (j < n) {
        for (int k = n - 1; k >= i; k--) {
           cout << mat[k][j] << " ";
        }
            j++;
     }   }

    return 0;
}
