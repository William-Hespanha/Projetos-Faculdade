#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* rie uma aplica��o de ser� respons�vel por calcular a �rea de uma
circunfer�ncia (pesquise caso tenha d�vidas de como calcular a �rea de uma circunfer�ncia). */
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
