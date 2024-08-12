#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie uma aplicação que dado um valor de temperatura em
graus Celsius deverá apresentar o resultado convertido em graus Fahrenheit.*/

int main(int argc, char *argv[]) {
		
	float temp_grau, temp_fahrenheit = 0.0;
	
	printf(":::... Conversor de temperatura ...::: \n \n");
	printf("- Coloque a temperatura em Graus Celsius - \n");
	scanf("%f", &temp_grau);
	
	temp_fahrenheit = (temp_grau * 1.8) + 32;
	
	printf("A temperatura de Graus Celsius para Grau Fahrenheit e de: %0.2f \n", temp_fahrenheit);
	
	
	
	
	
	
	
	
	return 0;
}
