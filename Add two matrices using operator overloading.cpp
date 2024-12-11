
// Write a program to add two matrices using operator overloading


#include <iostream>
using namespace std;

class Matrix {
    int mat[3][3];  // A 3x3 matrix for simplicity
public:
    // Constructor to initialize the matrix
    Matrix() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                mat[i][j] = 0;
    }

    // Input matrix elements
    void input() {
        cout << "Enter matrix elements (3x3):\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& m) {
        Matrix temp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }

    // Display the matrix
    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix mat1, mat2, result;

    // Input two matrices
    cout << "Input first matrix:\n";
    mat1.input();
    
    cout << "Input second matrix:\n";
    mat2.input();

    // Add the two matrices using overloaded + operator
    result = mat1 + mat2;

    // Display the result
    cout << "Resultant matrix after addition:\n";
    result.display();

    return 0;
}
