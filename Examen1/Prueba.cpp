#include <iostream>

using namespace std;

const int TAMANIO_MATRIZ = 3;

void leerYMostrarMatriz(int matriz[][TAMANIO_MATRIZ], const string& mensaje) {
    cout << mensaje << " " << TAMANIO_MATRIZ << "x" << TAMANIO_MATRIZ << ":\n";
    for (int i = 0; i < TAMANIO_MATRIZ; ++i) {
        for (int j = 0; j < TAMANIO_MATRIZ; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

void traspuesta(int matriz[][TAMANIO_MATRIZ], int traspuestaMatriz[][TAMANIO_MATRIZ]) {
    for (int i = 0; i < TAMANIO_MATRIZ; ++i) {
        for (int j = 0; j < TAMANIO_MATRIZ; ++j) {
            traspuestaMatriz[j][i] = matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][TAMANIO_MATRIZ], const string& mensaje) {
    cout << mensaje << " " << TAMANIO_MATRIZ << "x" << TAMANIO_MATRIZ << ":\n";
    for (int i = 0; i < TAMANIO_MATRIZ; ++i) {
        for (int j = 0; j < TAMANIO_MATRIZ; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int matriz[TAMANIO_MATRIZ][TAMANIO_MATRIZ];
    int traspuestaMatriz[TAMANIO_MATRIZ][TAMANIO_MATRIZ];

    leerYMostrarMatriz(matriz, "Ingrese los elementos de la matriz");

    traspuesta(matriz, traspuestaMatriz);
    mostrarMatriz(traspuestaMatriz, "La matriz traspuesta es:");

    return 0;
}
