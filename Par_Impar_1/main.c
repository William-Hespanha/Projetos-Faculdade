#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um programa que solicite do usu�rio um determinado valor inteiro, o programa
dever� verificar se o valor fornecido � um valor par ou �mpar (pesquise sobre como identificar se
um valor � par ou �mpar). */

int main(int argc, char *argv[]) {
	//Variaveis
	int numero = 0.0;
	int restodadivisao = 0.0;
	
	
	//Entrada
	printf(":::Calculadora para ver se o numero e par ou impar \n \n");
	printf(":::... Coloque aqui o numero para ver se e par ou impar \n");
	scanf("%i", &numero);
	
	//Processamento
	restodadivisao = (numero % 2);
	
	if(restodadivisao == 0){
		printf("O numero e PAR!");
		printf("Resto da divisao por 2: %i" ,restodadivisao);
	} else{
		printf("O numero e IMPAR!");
	}
	//Saida
	
	
	return 0;
}
