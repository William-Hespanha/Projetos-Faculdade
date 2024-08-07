#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* rie uma aplicação de será responsável por calcular a área de uma
circunferência (pesquise caso tenha dúvidas de como calcular a área de uma circunferência). */
int main(int argc, char *argv[]) {
	//Variaveis
	float pi = 3.14;
	float raio, circunferencia = 0.0;
	
	//Entrada
	scanf("%f", &raio);
	
	//Processamento
	circunferencia= pi * raio * raio;
	
	
	//Saida
	printf("A circunferencia e: %f \n" , circunferencia);

	
	return 0;
}
