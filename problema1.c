/* Autora Laura Keidann Rodrigues da Silva - 00217870
* Agosto 2021
* Problema 1: o programa le o comprimento e a largura de um quarto (em metros)
* e a potencia das lampadas (em watts)
* e calcula o numero de lampadas necessarias para iluminar o quarto.
* Iluminacao adequada: 16 W por m2. 
*/
#include <stdio.h>

int main(void){

float largura, comprimento;
int potencia, numeroLampadas;

printf("Entre com a largura e o comprimento do quarto: ");
scanf("%f%f", &largura, &comprimento);

printf("Entre com a potencia das lampadas (em watts): ");
scanf("%d", &potencia);

numeroLampadas = ((largura*comprimento)*16)/potencia; 
printf("Numero de lampadas: ", numeroLampadas);

return 0; 

}