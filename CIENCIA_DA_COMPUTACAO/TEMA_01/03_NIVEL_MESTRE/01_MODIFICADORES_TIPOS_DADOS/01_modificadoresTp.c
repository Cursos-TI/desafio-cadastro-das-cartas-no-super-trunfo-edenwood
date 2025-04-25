#include <stdio.h>

/*
================= Modificadores de tipos de dados =================

1 - São usados para alterar as propriedades dos tipos de dados primitivos, permitindo uma manipulação mais precisa e eficiente das variáveis.
2 - Os modificadores de tipos de dados permitem que você controle melhor como os dados são armazenados e manipulados no programa. Em C, os modificadores mais comuns são unsigned e long.
================= Modificador unsigned =================

1 - É usado para declarar variáveis que podem armazenar apenas valores positivos (incluindo zero). Ele pode ser aplicado aos tipos de dados int e char, dobrando a faixa positiva de valores que podem ser armazenados.
    * int = -2,147,483,648 a 2,147,483,647
    * unsigned int = 0 a 4,294,967,295
    * char = -128 a 127
    * unsigned char = 0 a 255

2 - Quando usar unsigned? Imagine que você está desenvolvendo um jogo e precisa armazenar a pontuação do jogador. A pontuação nunca será negativa, então usar unsigned int permite armazenar pontuações maiores do que seria possível com um int comum. Outro exemplo seria ao trabalhar com pixels de uma imagem, que são representados por valores de 0 a 255; nesse caso, unsigned char é ideal.
*/

int main(){

    int signedNum = 3000000000; // Variavel para numeros com sinais, ou seja que pode representar numero negativos (int normal).
    unsigned int unsignedNum = 3000000000; // Variavel somentes para numeros positivos (unsigned int).


    printf("Numero Signed: %d\n", signedNum);
    printf("Numero Unsigned: %u\n", unsignedNum); // Vai ser impresso por um especificador de formato %u(numero sem sinal).

    return 0;
}