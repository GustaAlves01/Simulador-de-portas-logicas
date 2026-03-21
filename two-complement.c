#include <stdio.h>
#include <stdbool.h>
// calculadora binaria bit-bit aplicando tecnicas de abstracao
// misturando conhecimentos de portas logicas com conhecimentos de abstracao

bool se_complemento(int a, int b, int c);
bool soma_binario(int a, int b, int c);
void resultado(int bit);

void inteiro_binario(int a, int b){
    int bin1[5], bin2[5];
    bool carry = 0;

    /*
    4 bits apenas, i representa qual bit o
    operador bitwise (>>) vai printar,
    movendo cada bit individualmente
    */

    for (int i = 0; i <= 4; i++){
        bin1[i] = (a >> i) & 1;
        bin2[i] = (b >> i) & 1;

        int soma = soma_binario(bin1[i], bin2[i], carry);
        carry = se_complemento(bin1[i], bin2[i], carry);
        resultado(soma);
    }
}

bool se_complemento(int a, int b, int c){
    /* Formula para complemento (carry):
       ((A & B) || ((A ^ B) & C))
       carry deve ser 0 na primeira execucao
    */
    return ((a & b) || ((a ^ b) & c));
}

bool soma_binario(int a, int b, int c){
    /* Formula para soma:
       ((A ^ B) ^ C)
    */
    return ((a ^ b) ^ c);
}

void resultado(int bit){
    printf("%d", bit);
}

int main(){
    inteiro_binario(1,4);

    return 0;
}