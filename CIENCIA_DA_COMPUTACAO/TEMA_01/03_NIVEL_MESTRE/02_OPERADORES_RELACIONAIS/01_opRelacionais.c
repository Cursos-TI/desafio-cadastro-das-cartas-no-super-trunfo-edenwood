#include <stdio.h>

/*
 Eles são fundamentais na programação, pois permitem a comparação entre variáveis. 
 Usados para estabelecer relações entre valores, os operadores relacionais retornam valores booleanos (1 para verdadeiro e 0 para falso). 
 Eles são essenciais para a tomada de decisões em programas
*/

int main()
{
    int a = 10;
    int b = 15;
    int x = 5;
    char c = 'a';
    
    printf("a > b: %d\n", a > b); // > (Maior que)
    printf("a < b: %d\n", a < b); // < (Menor que)
    printf("a >= b: %d\n", a >= b); // >= (Maior ou igual a)
    printf("a <= b: %d\n", a <= b); // <= (Menor ou igual a)
    printf("a == b: %d\n", a == b); // == (Igual a)
    printf("a != b: %d\n", a != b); // != ( Diferente de)
    printf("x >= c: %d\n", x >= c);
    printf(" O valor ASCII de %c é %d:\n", c, c); // Imprime o valor da letra "a" na tabela ASCII

    return 0;
}