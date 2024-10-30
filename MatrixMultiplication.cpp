#include<iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int matrix[10][10];

    Matrix(int r, int c) {
        rows = r;
        cols = c;
    }

    void setMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix multiply(Matrix other) {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    Matrix matrix1(rows1, cols1);
    Matrix matrix2(rows2, cols2);

    cout << "Enter elements of first matrix:\n";
    matrix1.setMatrix();
    cout << "Enter elements of second matrix:\n";
    matrix2.setMatrix();

    Matrix result = matrix1.multiply(matrix2);
    cout << "Result of multiplication:\n";
    result.display();

    return 0;
}
