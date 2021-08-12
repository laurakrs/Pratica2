/* Autora Laura Keidann Rodrigues da Silva - 00217870
* Agosto 2021
* Problema 2: o programa le do teclado o raio de um circulo
* calcula e informa na tela o perimetro e a area do maior quadrado
* inscrito nesse circulo.
*/


#include <stdio.h>
#include <math.h>

int main(void){

    float raio, perimetroQuad, areaQuad, lado1, lado2;

    printf("Entre com um valor para o raio: ");
    scanf("%f", &raio);

    lado1 = sqrt(raio);
    lado2 = raio*2/sqrt(2);
    

    perimetroQuad = (sqrt(raio))*4;
    areaQuad = ((raio*2)/sqrt(2))*((raio*2)/sqrt(2));

    printf("Lado1 Teste: %f", lado1);
    printf("Lado2 teste: %f", lado2);
    printf("Perimetro do maior quadrado: %f", perimetroQuad);
    printf("Area do maior quadrado; %f", areaQuad);

    return 0; 
}