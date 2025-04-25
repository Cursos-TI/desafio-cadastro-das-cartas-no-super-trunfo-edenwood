#include <stdio.h>
/*
=================== MODIFICADOR LONG ===================

1 - É usado para aumentar a capacidade de armazenamento dos tipos de dados primitivos. Ele pode ser aplicado a int e double, permitindo armazenar valores maiores e com maior precisão.
2 - Um int normal pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647. Já um long int pode armazenar valores muito maiores, de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807, proporcionando uma faixa muito mais ampla para cálculos que exigem grandes números inteiros.
3 - Um double pode armazenar valores com grande precisão, de ±1.7E-308 a ±1.7E+308. Um long double, por outro lado, oferece uma precisão ainda maior, permitindo armazenar valores de ±3.4E-4932 a ±1.1E+4932.
    * int = -2,147,483,648 a 2,147,483,647
    * long int = -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
    * double = ±1.7E-308 a ±1.7E+308 (simbolo MAIS ou MENOS)
    * long double = ±3.4E-4932 a ±1.1E+4932 (simbolo MAIS ou MENOS)
4 - Quando usar long? Se você precisa trabalhar com números que excedem a capacidade de um int normal (por exemplo, em cálculos astronômicos ou para armazenar a população mundial), long int ou long long int são necessários. Se a precisão de double não for suficiente para seus cálculos (em simulações físicas ou modelagem financeira, por exemplo), long double é a escolha adequada.

 */

 int main() {
    int regularNumber = 2147483647;  // Valor máximo de int
    long int bigNumber = 2147483647;  // Valor máximo de long int (se for 4 bytes)

    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);

    bigNumber = 2147483648;  // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);

    return 0;
}