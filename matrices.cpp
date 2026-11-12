#include <iostream>
using namespace std;


int main() {
    const int FILAS = 3;
    const int COLS = 3;
    int matriz[FILAS][COLS];


    // Llenado de la matriz
    cout << "Ingrese los valores de la matriz " << FILAS << "x" << COLS << ":\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    // Impresión en formato de tabla
    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}
