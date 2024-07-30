#include <iostream>

// Función para leer los 10 números enteros y guardarlos en un arreglo
void leerNumeros(int numeros[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Ingresa el número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }
}

// Función para calcular la media de los valores positivos
double calcularMediaPositivos(const int numeros[], int n) {
    int sumaPositivos = 0;
    int contadorPositivos = 0;

    for (int i = 0; i < n; ++i) {
        if (numeros[i] >= 0) {
            sumaPositivos += numeros[i];
            contadorPositivos++;
        }
    }

    return static_cast<double>(sumaPositivos) / contadorPositivos;
}

// Función para calcular la media de los valores negativos
double calcularMediaNegativos(const int numeros[], int n) {
    int sumaNegativos = 0;
    int contadorNegativos = 0;

    for (int i = 0; i < n; ++i) {
        if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
            contadorNegativos++;
        }
    }

    return static_cast<double>(sumaNegativos) / contadorNegativos;
}

int main() {
    const int n = 10;
    int numeros[n];

    leerNumeros(numeros, n);

    double mediaPositivos = calcularMediaPositivos(numeros, n);
    double mediaNegativos = calcularMediaNegativos(numeros, n);

    std::cout << "Media de los valores positivos: " << mediaPositivos << std::endl;
    std::cout << "Media de los valores negativos: " << mediaNegativos << std::endl;

    return 0;
}
