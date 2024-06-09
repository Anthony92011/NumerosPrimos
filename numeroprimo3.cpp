#include <stdio.h>
#include <stdbool.h>

// Funcion para verificar si un numero es primo
bool es_primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Funcion para contar numeros primos en un rango
int contar_primos(int inicio, int fin) {
    int contador = 0;
    for (int i = inicio; i <= fin; i++) {
        if (es_primo(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int inicio, fin;

    printf("Ingrese el inicio del rango: ");
    scanf("%d", &inicio);

    printf("Ingrese el fin del rango: ");
    scanf("%d", &fin);

    int total_primos = contar_primos(inicio, fin);
    printf("Numero de primos entre %d y %d: %d\n", inicio, fin, total_primos);

    return 0;
}
