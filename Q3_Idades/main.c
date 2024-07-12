#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação console em C responsável por armazenar 8 idades de alunos, a aplicação
deverá conter um menu interativo com as opções abaixo relacionadas:
..:: IDADES ::..
1. Zerar (deverá percorrer o vetor e atribuir valor zero a todos os endereços)
2. Carregar (deverá solicitar do usuário 8 idades que serão armazenadas)
3. Imprimir (deverá percorrer o vetor e exibir todas as idades do vetor)
4. Somar (Deverá percorrer o vetor, somar todas as idades e exibir o resultado)
5. Pares (Deverá percorrer o vetor e exibir todas as idades pares)
6. Contar pares (Deverá percorrer o vetor, contar todas as idades pares e exibir a contagem)
7. Somar pares (Deverá percorrer o vetor, somar todas as idades que são pares e exibir a soma)
8. Menores idade (Deverá percorrer o vetor e exibir todas as idades que menores que 18)
9. Contar maiores idade (Deverá percorrer o vetor e contar o número de idades maiores ou igual
a 18 anos e exibir o resultado da contagem).
10. Somar maiores idade (Deverá percorrer o vetor e somar as idades maiores ou igual a 18 anos e
exibir o resultado da soma). */

int main(int argc, char *argv[]) {
	
	int opcao = 0;
	int vetores[8];
	int i;
	
	do{
		printf("\n \n");
		printf(" :::... Idades :::...     	 \n");
		printf("1. Zerar                	 \n");
		printf("2. Carregar             	\n");
		printf("3. Imprimir         		\n");
		printf("4. Somar               		 \n");
		printf("5. Pares					\n");
		printf("6. Contar pares				\n");
		printf("7. Somar pares				\n");
		printf("8. Menores idades			\n");
		printf("9. Contar maiores de idade \n");
		printf("10. Somar maiores de idade \n");
		printf("91. Sair					\n");
		
		printf("Digite a opcao:");
		scanf("%d", &opcao);
		
		if(opcao== 1){
			printf("- Opcao 1 selecionada - \n");
			printf(" Zerando \n");
			for(i = 0; i <= 7; i++){
				vetores[i] = 0;
			}
		}else{
			if(opcao == 2){
				printf("- Opcao 2 selecionada - \n");
				printf("- Coloque as idades \n");
				for(i= 0; i <= 7; i++){
					scanf("%d", &vetores[i]);
				}
			}else{
				if(opcao == 3){
					printf("- Opcao 3 selecionada - \n");
					printf("- Imprimindo valores \n");
					for(i = 0; i <= 7; i++){
						printf("Os valores sao %d \n", vetores[i]);
					}
				}else{
					if(opcao == 4){
						printf("- Opcao 4 selecionada - \n");
						printf("- Somando Idades - \n");
						int soma = 0;
						for(i = 0; i <=7; i++){
							soma += vetores[i];
						}
						printf("A soma das idades e %d \n", soma);
					}else{
						if(opcao == 5){
							printf("- Opcao 5 selecionada - \n");
							for(i = 0; i < 8; i++){
								if(vetores[i] % 2 == 0){
									printf("Os numeros pares sao %d \n", vetores[i]);
								}
							}
						}else{
							if(opcao == 6){
								printf("- Opcao 6 escolhida - \n");
							int pares = 0;
							for(i = 0; i < 8 ; i++){
								if(vetores[i] % 2 == 0) {
									pares++;
									}
								}	
							printf("A quantidade de numeros pares e: %d \n ", pares);
							}else{
								if(opcao == 7){
								printf("- Opcao 7 escolhida - \n");
								printf("-- Somando Idades Pares -- \n");
								int soma_pares = 0;
								for(i = 0; i < 8; i++){
									if(vetores[i] % 2 == 0){
										soma_pares += vetores[i];
										}
									}
								printf("- A soma das idades pares e %d", soma_pares);
								}else{
									if(opcao == 8){
										printf("- Opcao 8 escolhida - \n");
										printf("- Exibindo idades menores que 18 anos \n");
										for(i = 0; i < 8; i++){
											if(vetores[i] < 18){
												printf("As idades menores que 18 anos sao %d \n", vetores[i]);
											}
										}
									}else{
										if(opcao == 9){
											printf("- Opcao 9 escolhida - \n");
											printf("- Contar maiores de idade - \n");
											int contador_maior_idade = 0;
											for(i = 0; i < 8; i++){
											if(vetores[i] >= 18){
												contador_maior_idade++;
												}	
											}
										printf("- A quantidade de maiores de idade e de: %d \n", contador_maior_idade);
										}else{
											if(opcao == 10){
												printf("- Opcao 10 escolhida - \n");
												printf("- Somando maiores de idade - \n");
												int soma_maior_idade = 0;
												for(i = 0; i < 8; i++){
													if(vetores[i] >=18){
														soma_maior_idade += vetores[i];
													}
												}
											printf("- A soma dos maiores de idade e de: %d \n", soma_maior_idade);
											}
										}
									}
								}
							}
						}
					}	
				}
			}	
		}
	}while (opcao != 91);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
