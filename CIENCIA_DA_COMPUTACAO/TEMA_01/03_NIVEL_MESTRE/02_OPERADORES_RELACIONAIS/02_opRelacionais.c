#include <stdio.h>

/*
Às vezes, é necessário fazer conversões explícitas para garantir a comparação correta. Nesse exemplo, a variável num é convertida explicitamente para float antes da comparação com result.
*/

int main(){

    float num1 = 10.2;
    int num2 = 10;

    printf("num1 > num2: %d\n", (int)num1 > num2); // O resultado sera baseado na comparaçao de numero inteiro usando CASTING (int)
    printf("num1 == num2: %d\n", (int) num1 == num2);

    return 0;
}