#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma matriz capaz de armazenar 1000 valores inteiros, baseado nesta matriz
implemente o menu abaixo (Dica – Crie uma matriz menor para conferir se os métodos irão funcionar
e somente depois aumente o tamanho):
MENU – PROCESSAMENTO
1. Carregar aleatório (considere valores entre 0 e 5000)
2. Imprimir todos
3. Maior valor (percorra a matriz e localize o maior valor existente, imprima a posição e valor)
4. Menor valor (idem item 3)
5. Posição e Núm. de Repetições (solicite do usuário um valor inteiro, percorra a matriz e imprima as
posições onde o valor está contido, no final do processamento imprima a quantidade de vezes que o
valor existe)
6. Pares (percorra a matriz e imprima na tela apenas os números pares)
7. Relatório Pares x Ímpares (percorra a matriz, ao término do processamento exiba as seguintes
informações:
Número de valores pares e ímpares existentes;
Soma dos valores pares e ímpares;
Maior e menor número par;
Maior e menor número ímpar;
Valor médio dos valores pares e ímpares;
Maior soma (compare as somas e exiba o que contiver a maior soma);
Maior contagem (compare a contagem e exiba o que contiver a maior contagem) )
9. Sair
*/

int main(int argc, char *argv[]) {
	int opcao = 0;
	int matriz[100][100];
	int l, c = 0;
	int contador_pares, contador_impares = 0;
	int soma_pares, soma_impares = 0;
	int valor, contador_repeticoes = 0;
	
	do{
		printf(":::... Processamento ...:::        		\n");
		printf("1. Carregar aleatorio                   \n");
		printf("2. Imprimir todos               		\n");
		printf("3. Maior Valor            				\n");
		printf("4. Menor Valor                			\n");
		printf("5. Posicao e Num. de repeticoes 		\n");
		printf("6. Pares								\n");
		printf("7. Relatorio Pares X Impares			\n");
		printf("9. Sair                   				\n");
		printf("Digite a opcao:");
		scanf("%d", &opcao);
		
		if(opcao == 1){
		printf("- Opcao 1 selecionada - \n");
		printf("- Carregando valores aleatorios - \n");	
		for(l = 0; l < 100; l++){
			for(c = 0; c < 100; c++){
					matriz[l][c] = rand () %5000;
			}
		}
			
		}else{
			if(opcao == 2){
			printf("- Opcao 2 selecionada - \n");
			printf("- Imprimindo valores - \n");
			for(l = 0; l < 100; l++){
				for(c = 0; c < 100; c++){
					printf("O valor da linha %d na coluna %d e de %d \n", l, c, matriz[l][c]);
				}
			}	
			
			}else{
				if(opcao == 3){
				printf("- Opcao 3 selecionada - \n");
				printf("- Verificando qual e o maior valor - \n");
				int maior_valor = matriz[0][0];
				int linha_maior, coluna_maior = 0;
				for(l = 0; l < 100; l++){
					for(c = 0; c < 100; c++){
						if(matriz[l][c] > maior_valor){
							maior_valor = matriz[l][c];
							linha_maior = 1;
							coluna_maior = c;
						}
					}
				}	
				printf("O maior valor da matriz esta na linha %d e na coluna %d e tem o valor de: %d \n", l, c, maior_valor);	
				}else{
					if(opcao == 4){
						printf("- Opcao 4 selecionada - \n");
						printf("- Verificando qual e o menor valor - \n");
						int menor_valor = matriz[0][0];
						int linha_menor, coluna_menor = 0;
						for(l = 0; l < 100; l++){
							for(c = 0; c < 100; c++){
								if(matriz[l][c] < menor_valor){
									menor_valor = matriz[l][c];
									linha_menor = 1;
									coluna_menor = c;
								}
							}
						}
					printf("O menor valor da matriz esta na linha %d e na coluna %d e tem o valor de: %d \n", l, c, menor_valor);	
					}else{
						if(opcao == 7){
	//Detalhe caso esse código caia na prova, acabei me perdendo e fiz a opcao 7 antes da 5 e da 4, por isso o código
	//esta invertido, peço perdao marçal					
						printf("- Opcao 5 selecionada - \n");
						printf("- Gerando relatorio de pares e impares - \n"); 
						contador_pares = 0;
						contador_impares = 0;
						int maior_par = matriz[0][0]; 
						int menor_par = matriz[0][0];
						int maior_impar = matriz[0][0];
						int menor_impar = matriz[0][0];
						for(l = 0; l < 100; l++){
							for(c = 0; c < 100; c++){
									if(matriz[l][c] % 2 == 0){
										contador_pares++;
										soma_pares += matriz[l][c];
										if(matriz[l][c] > maior_par) maior_par = matriz[l][c];
										if(matriz[l][c] < menor_par) menor_par = matriz[l][c];	
									}else{
										contador_impares++;	
										soma_impares += matriz[l][c];
										if(matriz[l][c] > maior_impar) maior_impar = matriz[l][c];
										if(matriz[l][c] < menor_impar) menor_impar = matriz[l][c];
									}	
								}
							}	
						printf("- A quantidade de numeros pares e de: %d \n", contador_pares);
						printf("- A quantidade de numeros impares e de: %d \n", contador_impares);
						printf("- A soma dos valores pares e: %d \n", soma_pares);
						printf("- A soma dos valores impares e: %d \n", soma_impares);
						printf("- O maior valor par e: %d \n", maior_par);
						printf("- O menor valor par e: %d \n", menor_par);
						printf("- O maior valor impar e: %d \n", maior_impar);
						printf("- O menor valor impar e: %d \n", menor_impar);
						
						}else if (opcao == 5){
							printf("- Opcao 5 selecionada - \n");
							printf("- Coloque o valor para a consulta: \n");
							scanf("%d", &valor);
							for(l = 0; l < 100; l++){
								for(c = 0; c < 100; c++){
									if(matriz[l][c] == valor){
										printf("O valor foi encontrado na posicao %d x %d \n", l, c);
										contador_repeticoes++;
									}
								}
							}	
						printf("- O valor %d aparece %d vezes na matriz \n", valor, contador_repeticoes);
						}else if (opcao == 6){
							printf("- Opcao 6 selecionada - \n");
							printf("- Mostrando numeros pares - \n");
							for(l = 0; l < 100; l++){
								for(c= 0 ; c < 100; c++){
									if(matriz[l][c] % 2 == 0){
										printf("O valor %d e par \n", matriz[l][c]);
									}
								}
							}
						}
					}
				}
		 	}
		}

	
	}while (opcao != 9);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
