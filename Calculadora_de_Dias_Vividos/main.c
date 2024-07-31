#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação console que solicite do usuário
o ano de nascimento e o ano atual, baseado nestas duas informações exibida a quantidade de dias
vividos até o momento, considere que cada ano contém 365 dias. */

int main(int argc, char *argv[]) {
	//Variaveis
	int anonascimento = 0.0;
	int anoatual = 0.0;
	int diasvividos = 0.0;
	
	//Entrada
	printf(":::... Calculadora de dias vividos ...::: \n \n");
	printf("... Coloque o ano em que nasceu ... \n");
	scanf("%i", &anonascimento);
	printf("... Coloque o ano atual ... \n");
	scanf("%i", &anoatual);
	
	//Processamento
	diasvividos = (anoatual - anonascimento) *365;
	
	//Saida
	printf("Seus dias vividos sao: %i", diasvividos);
	
	return 0;
}
