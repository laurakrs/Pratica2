/* Autora Laura Keidann Rodrigues da Silva - 00217870
* Agosto 2021
* Problema 3: o programa le uma quantia inicial x, um percentual i (variavel inteira) 
* e a quantidade de dias d da aplicacao.
* calcula e informa na tela a quantidade final com duas casas decimais
* Os juros sao creditados apenas no final de cada mes (30 dias)
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

    meses = (int)floor(dias/30);

    quantiaFinal = quantiaInicial * pow((1 + percentual/100.0), meses);

    printf("Montante final (depois de %d meses inteiros): %.2f", meses, quantiaFinal);

    return 0; 
}

