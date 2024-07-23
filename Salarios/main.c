#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/*
		Crie uma aplica��o console, esta aplica��o dever� ser capaz de armazenar at� 100 
		diferentes sal�rios de funcion�rios. Logo abaixo � apresentado um menu de console que dever� realizar 
		N opera��es sobre os diferentes sal�rios armazenados.	
		
		MENU - SAL�RIOS
		01 - Adicionar
		02 - Remover posi��o Y (remove um sal�rio de uma posi��o informada pelo usu�rio, � importante 
		validar se a posi��o informada existe no vetor).
		03 - Imprimir todos
		04 - Pesquisar sal�rio X (dever� solicitar do usu�rio o sal�rio desejado e pesquisar se existe no vetor, 
		caso exista (na primeira ocorr�ncia dele), dever� exibir a posi��o que ele est� armazenado e parar a 
		execu��o do processamento)
		05 - Adicionar na posi��o (dever� solicitar do usu�rio o valor do sal�rio e posi��o que deseja armazen�lo no vetor caso ela n�o esteja ocupada, � importante validar se aposi��o informada pelo usu�rio existe 
		no vetor)
		06 - Pesquisar a quantidade sal�rios X (dever� solicitar do usu�rio um sal�rio e contar quantas vezes 
		este sal�rio existe no vetor)
		07 - Somar sal�rios
		08 - Somar sal�rios X (dever� percorrer o vetor e somar os valores com as ocorr�ncias de igual valor)
		09 - Contar sal�rios
		10 - Contar sal�rios X (dever� percorrer o vetor e contar quantas vezes o sal�rio X aparece no mesmo)
		11 - Contar sal�rios maiores que X
		12 - Maior sal�rio
		13 - Menor sal�rio
		14 - M�dia sal�rios
		15 - Remover sal�rios valor X
		16 - Remover todos os sal�rios
		17 - Imprimir sal�rio posi��o Y
		18 - Imprimir sal�rios menores que X
		19 - Aplicar acr�scimo de Z% em todos os sal�rios
		20 - Aplicar desconto de Z% em sal�rios maiores que X
		99 - Sair.
		Digite a op��o desejada:

*/

int main(int argc, char *argv[]) {
	
	float vetor[100] = {0};
	int posicao;
	int i;
	float salario;
	
	
	int opcao;
	do {
		
		printf("::.. SALARIOS ..::\n\n");
		printf("1  - Adicionar 												\n");
		printf("2  - Remover Posicao										\n");
		printf("3  - Imprimir Todos											\n");
		printf("4  - Pesquisar Salario										\n");
		printf("5  - Adicionar Posicao										\n");
		printf("6  - Pesquisar Quantidade de Salarios						\n");
		printf("7  - Somar Salarios											\n");
		printf("8  - Somar Salarios X										\n");
		printf("9  - Contar Salarios										\n");
		printf("10 - Contar Salarios X										\n");
		printf("11 - Contar Salarios maiores Que							\n");
		printf("12 - Maior Salario											\n");
		printf("13 - Menor Salario											\n");
		printf("14 - Media Salarios											\n");
		printf("15 - Remover Salarios Valor									\n");
		printf("16 - Remover todos os Salarios								\n");
		printf("17 - Imprimir Salarios Posicao								\n");
		printf("18 - Imprimir Salarios Menores Que							\n");
		printf("19 - Aplicar Acrescimo de X/100 em Salarios Maiores Que		\n");
		printf("20 - Aplicar Desconto de X/100 em Salarios Maiores Que		\n");
		printf("99 - Sair												  \n\n");
		printf("Digite a opcao desejada: ");
		scanf("%d", &opcao);
		
		if (opcao == 1) {
			printf("\n\n");
			
			for (i = 0; i < 100; i++) {
				vetor[i] = 0;		
			}
			
			printf("!! Os salarios foram adicionados ao vetor !!");
			printf("\n\n\n");
			
			
			printf("\n\n\n");
		
		} else if (opcao == 2) {
			printf("\n\n");
			
			
			printf("-Digite a posicao (ate 100) em que deseja remover o salario contido: ");
			scanf("%d", &posicao);
			
			if (posicao > 100 || posicao < 0) {
				printf("\n");
				printf("!! Posicao INVALIDA !!");
				
			} else if (vetor[posicao] == 0) {
				printf("\n");
				printf("!! Nao foi inserido nenhum salario nesta posicao !!");
				
			} else {
				printf("\n");
				vetor[posicao] = 0;
				printf("!! Idade da posicao %d REMOVIDO com SUCESSO !!", posicao);
				
			}
			
			
			printf("\n\n\n");
			
		} else if (opcao == 3) {
			printf("\n\n");
			
			for (i = 0; i < 100; i++) {
				printf("Posicao %d - Salario %.2f\n", i, vetor[i]);
			}
			
			printf("\n\n\n");
			
		} else if (opcao == 4) {
			printf("\n\n");
			
			int encontrado = -1;
			
			printf("-Digite o salario que deseja pesquisar: ");
			scanf("%f", &salario);
			
			for (i = 0; i < 100 && encontrado == -1; i++) {
				if (vetor[i] == salario) {
					encontrado = i;
				}
			}
			
			if (encontrado != -1) {
                printf("-Salario encontrado na posicao %d do vetor\n", encontrado);
            } else {
                printf("!! Salario NAO encontrado no vetor !!\n");
            }
			
			printf("\n\n\n");
			
		} else if (opcao == 5) {
			printf("\n\n");
			
			printf("-Digite a posicao (ate 100) em que deseja inserir o salario: ");
			scanf("%d", &posicao);
			printf("-Digite o salario que deseja inserir: ");
			scanf("%f", &salario);
			printf("\n");
			
			if (posicao > 100 || posicao < 0) {
				printf("\n");
				printf("!! Posicao INVALIDA !!");
				
			} else if (vetor[posicao] != 0) {
				printf("\n");
				printf("!! Posicao OCUPADA !!");
					
			} else {
				vetor[posicao] = salario;
				printf("\n");
				printf("!! Idade adicionada com SUCESSO !!");
			}
			
			
			printf("\n\n\n");
			
		} else if (opcao == 6) {
			printf("\n\n");
			
			printf("-Digite o salario que deseja contar: ");
			scanf("%f", &salario);
			
			int cont = 0;
			for (i = 0; i < 100; i++) {
				if (vetor[i] == salario) {
					cont++;
				}
			}
			
			printf("- Quantidade de Salarios de %.2f reais: %d", salario, cont);
	
			printf("\n\n\n");
			
		} else if (opcao == 7) {
			printf("\n\n");
			float soma = 0;
			for (i = 0; i < 100; i++) {
				soma = soma + vetor[i];
			}
			
			printf("-A soma dos salarios e: %.2f \n", soma);
			
			printf("\n\n\n");
			
		} else if (opcao == 8) {
			printf("\n\n");
			
			float soma = 0;
			printf("-Digite o salario que deseja somar: ");
			scanf("%f", &salario);
			
			for (i= 0; i < 100; i++) {
				if (vetor[i] == salario) {
					soma = soma + vetor[i];
				}
			}
			
			printf("-A soma dos salarios e: %.2f \n", soma);
			
			printf("\n\n\n");
			
		} else if (opcao == 9) {
			printf("\n\n");
			
			int cont = 0;
			for (i = 0; i < 100; i++) {
				if (vetor[i] != 0) {
					cont++;
				}
			}
			
			printf("-Quantidade de salarios presentes no vetor: %d \n", cont);
			
			printf("\n\n\n");
			
		} else if (opcao == 10) {
			printf("\n\n");
			
			printf("-Digite o salario que deseja contar: ");
			scanf("%f", &salario);
			
			int cont = 0;
			for (i = 0; i < 100; i++) {
				if (vetor[i] == salario) {
					cont++;
				}
			}
			
			printf("-Quantidade de salarios iguais a %.2f: %d \n", salario, cont);
			
			printf("\n\n\n");
			
		} else if (opcao == 11) {
			printf("\n\n");
			
			printf("-Digite o salario que deseja contar: ");
			scanf("%f", &salario);
			
			int cont = 0;
			for (i = 0; i < 100; i++) {
				if (vetor[i] > salario) {
					cont++;
				}
			}
			
			printf("-Quantidade de salarios maiores que %.2f: %d \n", salario, cont);
			
			printf("\n\n\n");
			
		} else if (opcao == 12) {
			printf("\n\n");
			
			float maior = 0;
			for (i = 0; i < 100; i++) {
				if (vetor[i] > maior) {
					maior = vetor [i];
				}
			}
			
			printf("-Maior salario: %.2f \n", maior);
			
			printf("\n\n\n");
			
		} else if (opcao == 13) {
			printf("\n\n");
			
			
			float menor = FLT_MAX;
			for (i = 0; i < 100; i++) {
				if (vetor[i] < menor && vetor[i] != 0) {
					menor = vetor [i];
				}
			}
			
			printf("-Menor salario: %.2f \n", menor);
			
			
			printf("\n\n\n");
			
		} else if (opcao == 14) {
			printf("\n\n");
			
			int cont = 0;
			float media = 0;
			float soma = 0;
			for (i = 0; i < 100; i++) {
				if (vetor[i] != 0) {
					soma = soma + vetor[i];
					cont++;
				}
			}
			
			media = soma / cont;
			
			printf("-A m�dia dos salarios inseridos e: %.2f \n", media);
			
			
			printf("\n\n\n");
			
		} else if (opcao == 15) {
			printf("\n\n");
			
			printf("-Digite o valor do salario que deseja remover: ");
			scanf("%f", &salario);
			printf("\n\n");
			
			for (i = 0; i < 100; i++) {
				if (vetor[i] == salario) {
					vetor[i] = 0;
				}
			}
			
			printf("!! Salarios de valor %.2f removidos com SUCESSO !!", salario);
			printf("\n\n\n");
			
		} else if (opcao == 16) {
			printf("\n\n");
			
			for (i = 0; i < 100; i++) {
				vetor[i] = 0;
			}
			
			printf("!! TODOS os salarios removidos com SUCESSO !!");
			printf("\n\n\n");
			
		} else if (opcao == 17) {
			printf("\n\n");
			
			printf("-Digite a posicao (ate 100) que deseja imprimir o salario contido: ");
			scanf("%d", &posicao);
			
			if (posicao > 100 || posicao < 0) {
				printf("\n");
				printf("!! Posicao INVALIDA !!");
				
			} else if (vetor[posicao] == 0) {
				printf("\n");
				printf("!! Nao foi inserido nenhum salario nesta posicao !!");
				
			} else {
				printf("\n");
				printf("Posicao %d - Salario %.2f", posicao, vetor[posicao]);
				
			}
			
			printf("\n\n\n");
			
		} else if (opcao == 18) {
			printf("\n\n");
			
			printf("-Digite o valor do salario que deseja: ");
			scanf("%f", &salario);
			
			printf("\n\n");
			printf("Salarios menores que %.2f\n\n", salario);
			
			for (i = 0; i < 100; i++) {
				if (vetor[i] < salario && vetor[i] != 0) {
					printf("Posicao %d - Salario %.2f\n", i, vetor[i]);
				}
			}
			
			printf("\n\n\n");
			
		} else if (opcao == 19) {
			printf("\n\n");
			
			int acrescimo = 0;
			printf("-Digite a porcentagem a ser ADICIONADA aos salarios: ");
			scanf("%d", &acrescimo);
			
			for (i = 0; i < 100; i++) {
				vetor [i] = vetor[i] + (vetor[i] * (acrescimo / 100));
			}
			
			printf("\n\n");
			printf("!! Acrescimo concluido com SUCESSO !!");
			printf("\n\n\n");
			
		} else if (opcao == 20) {
			printf("\n\n");
			
			float desconto = 0;
			printf("-Digite a porcentagem a ser DESCONTADA aos salarios: ");
			scanf("%f", &desconto);
			
			for (i = 0; i < 100; i++) {
				vetor [i] = vetor[i] - (vetor[i] * (desconto / 100));
			}
			
			printf("\n\n");
			printf("!! Desconto concluido com SUCESSO !!");
			printf("\n\n\n");
			
		}

		
	} while (opcao != 99);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
