#include <iostream>

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;

void leerMatriz(int matriz[][COLUMNAS]) {
    cout << "Ingrese los elementos de la matriz " << FILAS << "x" << COLUMNAS << ":\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][COLUMNAS]) {
    cout << "La matriz ingresada es:\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

void traspuesta(int matriz[][COLUMNAS], int traspuestaMatriz[][FILAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            traspuestaMatriz[j][i] = matriz[i][j];
        }
    }
}

void mostrarTraspuesta(int traspuestaMatriz[][FILAS]) {
    cout << "La matriz traspuesta es:\n";
    for (int i = 0; i < COLUMNAS; ++i) {
        for (int j = 0; j < FILAS; ++j) {
            cout << traspuestaMatriz[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int traspuestaMatriz[COLUMNAS][FILAS];

    leerMatriz(matriz);
    mostrarMatriz(matriz);

    traspuesta(matriz, traspuestaMatriz);
    mostrarTraspuesta(traspuestaMatriz);

    return 0;
}
