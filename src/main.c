#include <stdio.h>

int is_even(int numero) {
    return numero % 2 == 0;
}

//ayuda papus
void verificar_numero(int numero) {
    if (numero == 0) {
        printf("No se puede dividir entre 0\n ");
    }
else if (is_even(numero)) {
    printf("el numero es par\n ");
    }
else {
    printf("el numero es impar\n ");
    }
}
 int main() {
    while(1) {
        int numero;
     printf("ingresa numerito ");
    scanf("%i", &numero);
     verificar_numero(numero);
     }
return 0;
 }