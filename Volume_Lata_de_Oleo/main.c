#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie uma aplicação deva apresentar o volume de uma lata de óleo
baseado em sua altura e raio, a formula para o cálculo é VOLUME = 3.14149 * R2 * ALTURA.*/

int main(int argc, char *argv[]) {
	float raio, altura, volume = 0.0;
	printf(":::... Calculadora de volume de lata de oleo :::... \n \n");
	printf("- Coloque o Raio da lata de oleo - \n");
	scanf("%f", &raio);
	printf("- Coloque a altura da lata de oleo = \n");
	scanf("%f", &altura);
	
	volume = 3.14149 * (raio * raio) * altura;
	
	printf("O volume da lata de oleo e de: %0.2f \n",volume); 
	
	
	
	
	
	
	
	
	
	
	return 0;
}
