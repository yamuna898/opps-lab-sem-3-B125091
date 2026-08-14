#include <iostream>
using namespace std;

// Function to allocate memory for an m x n matrix
int** allocateMatrix(int m, int n) {
    int** mat = new int*[m]; // Allocate array of row pointers
    for (int i = 0; i < m; i++)
        mat[i] = new int[n]; // Allocate each row
    return mat;
}

// Function to free memory of an m x n matrix
void freeMatrix(int** mat, int m) {
    for (int i = 0; i < m; i++)
        delete[] mat[i]; // Delete each row
    delete[] mat;        // Delete array of row pointers
}

int main() {
    int m, n;
    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    // Allocate matrices
    int** A = allocateMatrix(m, n);
    int** B = allocateMatrix(m, n);
    int** C = allocateMatrix(m, n);

    cout << "Enter Matrix A elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) cin >> A[i][j];

    cout << "Enter Matrix B elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) cin >> B[i][j];

    // Matrix Addition and Display
    cout << "\nResultant Matrix (A + B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    // Free memory for all matrices
    freeMatrix(A, m);
    freeMatrix(B, m);
    freeMatrix(C, m);

    return 0;
}