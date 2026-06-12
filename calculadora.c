#include <stdio.h>

void suma();
void resta();
void multiplicacion();
void division();

int main() {
    int opcion;

    printf("Calculadora sencilla\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multiplicacion();
            break;
        case 4:
            division();
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}

void suma() {
    printf("Operacion suma pendiente de desarrollar.\n");
}

void resta() {
    printf("Operacion resta pendiente de desarrollar.\n");
}

void multiplicacion() {
    float a, b;
    printf("Dame el primer numero: ");
    scanf("%f", &a);
    printf("Dame el segundo numero: ");
    scanf("%f", &b);
    printf("El resultado de la multiplicacion es: %.2f\n", a * b);
}

void division() {
    float a, b;
    printf("Dame el primer numero: ");
    scanf("%f", &a);
    printf("Dame el segundo numero: ");
    scanf("%f", &b);
    if (b != 0) {
        printf("El resultado de la division es: %.2f\n", a / b);
    } else {
        printf("No se puede dividir entre cero.\n");
    }
}
