/* Autora Laura Keidann Rodrigues da Silva - 00217870
* Agosto 2021
* Problema 3: o programa le uma quantia inicial x, um percentual i (variavel inteira) 
* e a quantidade de dias d da aplicacao.
* calcula e informa na tela
* a quantidade final 
* Imprime com duas casas decimais
* os juros sao creditados apenas no final de cada mes (30 dias).

* Uma quantidade inicial x, aplicada a juros compostos com rendimento mensal de i%,
* gera um montante final de x(1 + i/100)
* n ao final de n meses. Escreva um programa que leia uma
* quantia inicial x, um percentual i (variável inteira) e a quantidade de dias d da aplicação, e após
* calcule (e informe na tela) o montante total ao final do período. Imprima essa quantia com duas
* casas decimais apenas (centavos). Importante: assuma que os juros são creditados apenas ao final de
* cada mês, e considere que todos os meses possuem 30 dias. Abaixo exemplo de execução:
*/

#include <stdio.h>
#include <math.h>

int main(void){

    float quantiaInicial, quantiaFinal;
    int percentual, dias, meses; 

    printf("Entre com a quantia inicial: ");
    scanf("%f", &quantiaInicial);

    printf("Entre com o percentual: ");
    scanf("%d", &percentual);

    printf("Entre com o numero de dias: ");
    scanf("%d", &dias);

    meses = floor(dias/30);

    quantiaFinal = quantiaInicial * pow((1 + percentual/100.0), meses);

    printf("Quantia final (depois de %d dias): %.2f", dias, quantiaFinal);

    return 0; 
}

