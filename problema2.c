/* Autora Laura Keidann Rodrigues da Silva - 00217870
* Agosto 2021
* Problema 2: o programa le do teclado o raio de um circulo
* calcula e informa na tela o perimetro e a area do maior quadrado
* inscrito nesse circulo.
*/


#include <stdio.h>
#include <math.h>

int main(void){

    float raio, perimetroQuad, areaQuad, lado;

    printf("Entre com um valor para o raio: ");
    scanf("%f", &raio);

    lado = raio*2/sqrt(2);


    perimetroQuad = lado*4;
    areaQuad = pow(lado, 2);

    printf("\nLado2 teste: %f", lado);
    printf("\nPerimetro do maior quadrado: %.2f", perimetroQuad);
    printf("\nArea do maior quadrado; %.2f", areaQuad);

    return 0;
}

