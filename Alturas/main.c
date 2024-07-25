#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação console, esta aplicação deve ser capaz de armazenar 10 valores
numéricos reais (alturas), para manipular este vetor, deve-se criar o menu com as opções abaixo.
MENU
1 - Adicionar (deverá solicitar a POSIÇÃO e VALOR do usuário, o valor fornecido, deverá ser adicionado
na posição informada, caso a posição informada não exista, deverá exibir msg para o usuário
informando que a posição é inválida).
2 - Ler (Deverá solicitar do usuário uma posição qualquer do vetor e então exibir o valor existente nesta
posição, validar se a posição existe antes de ler o valor).
3 - Somar (Deve somar todos os valores do vetor e apresentar o resultado da soma).
4 - Contar (Deve percorrer o vetor e contar quantos valores maior que zero existem no vetor).
5 - Contar posições vazias
9 - Sair. */

int main(int argc, char *argv[]) {
	int opcao = 0;
	float vetor[10];
	int l, soma, contador, contador0 = 0;
	int posicao, posicao2;
	float valor;
	
	for(l = 0; l < 10; l++){
		vetor[l] = 0;
	}
	
	do{
		printf("\n \n");
		printf("Calculadora Basica        	\n");
		printf("1. Adicionar                \n");
		printf("2. Ler               		\n");
		printf("3. Somar            		\n");
		printf("4. Contar                	\n");
		printf("5. Contar Vazios			\n");
		printf("9. Sair                   	\n");
		printf("Digite a opcao:");
		scanf("%d", &opcao);
		
		
		if(opcao == 1){
			printf("- Opcao 1 selecionada - \n");
			printf("- Coloque a posicao e o valor (de 0 a 9) que deseja - \n");
			printf("- Posicao - \n");
			scanf("%d", &posicao);
			
			if(posicao >= 0 && posicao < 10){
				printf("- Valor - \n");
				scanf("%f", &valor);
				vetor[posicao] = valor;
				printf("O valor %2.f foi adicionado na posicao: %d \n", valor, posicao);
			}else{
				printf("- Posicao invalida - \n");
			}
			
			
			
			
		}else if (opcao == 2){
		printf("- Opcao 2 selecionada - \n");
		printf("- Coloque a posicao do vetor que deseja - \n");
		printf("- Posicao - \n");
		scanf("%d", &posicao);
		
		if(posicao >= 0  && posicao < 10){
			printf("Valor na posicao %d: %.2f \n", posicao, vetor[posicao]);
		}else{
			printf("Posicao invalida! \n");
		}	
			
			
		}else if (opcao == 3){
		printf("- Opcao 3 selecionada - \n");
		printf("- Somando os valores - \n");
		for(l = 0; l < 10; l++){
			vetor[l] += soma;
		}	
		printf("A soma dos valores do vetor e de: %d \n", soma);	
		}else if (opcao == 4){
		printf("- Opcao 4 selecionada - \n");	
		printf("- Contando valores maiores que 0 - \n");
		for(l = 0; l < 10; l++){
			if(vetor[l] > 0){
			contador++;	
			}
		}
		printf("A quantidade de numeros e de: %d \n", contador);
		}else if (opcao == 5){
		printf("- Opcao 5 selecionada - \n");
		printf("- Contando posicoes vazias - \n");
		for(l = 0; l < 10; l++){
				if(vetor[l] == 0){
					contador0++;
				}
			}		
		printf("A quantidade de espacos vazios no vetor e de: %d \n", contador0);
		}
		
	
	}while (opcao != 9);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
