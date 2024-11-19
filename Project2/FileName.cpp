#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int rows, cols, num;

   
    cout << "¬ведите количество строк: ";
    cin >> rows;
    cout << "¬ведите количество столбцов: ";
    cin >> cols;
    cout << "¬ведите начальное число: ";
    cin >> num;

    
    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (j == 0 && i == 0) {
                array[i][j] = num; 
            }
            else if (j == 0) {
                array[i][j] = array[i - 1][cols - 1] * 2; 
            }
            else {
                array[i][j] = array[i][j - 1] * 2; 
            }
        }
    }

 
    cout << "—формированный массив:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

  
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    cout << "\n\t--------------------------------------------------------------\n\t";

    const int ROWS1 = 3; 
    const int COLS1 = 3; 
    int num1;

    
    cout << "¬ведите начальное число: ";
    cin >> num1;

    
    int array1[ROWS1][COLS1];

  
    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS1; ++j) {
            if (j == 0 && i == 0) {
                array1[i][j] = num1; 
            }
            else if (j == 0) {
                array1[i][j] = array1[i - 1][COLS1 - 1] + 1; 
            }
            else {
                array1[i][j] = array1[i][j - 1] + 1; 
            }
        }
    }

    
    cout << "—формированный массив:\n";
    for (int i = 0; i < ROWS1; ++i) {
        for (int j = 0; j < COLS1; ++j) {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
