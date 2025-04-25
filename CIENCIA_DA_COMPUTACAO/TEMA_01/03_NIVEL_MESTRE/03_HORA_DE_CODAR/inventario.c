#include <stdio.h>

int main(){

    char produtoA[30] = "T-Shirt";
    char produtoB[30] = "Calça";

    // Variaveis para calcular a quantidade do estoque
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    // Variaveis com os valores de cada item
    float valorA = 59.21;
    float valorB = 97.51;

    // Variaveis para calcular o estoque minimo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    // Variaveis para exibir o valor total do produto
    double valorTotalA;
    double valorTotalB;

    // Variavel para calcular o estoque
    int resultadoA, resultadoB;

    printf("\nO produto %s tem o estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("\nProduto %s tem o estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparaçoes com o valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem  estoque minimo %d\n", produtoA, resultadoA);
    printf(" O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    // Comparaçoes entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
}