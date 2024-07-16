#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplica��o console em C respons�vel por armazenar 60 valores
inteiros, a aplica��o dever� conter um menu de console com as op��es abaixo relacionada:
..:: SORTEIO ::..
1. Zerar (dever� percorrer o vetor e atribuir valor -1 a todos os endere�os)
2. Carregar aleat�rio (dever� carregar o vetor com valores inteiros aleat�rios entre 1 e 60, o aluno
dever� pesquisar gerar valores aleat�rios em C)
3. Imprimir (dever� percorrer o vetor e exibir todos os valores armazenados, exibir tamb�m a
posi��o em que o valor est� armazenado)
4. Somar (Dever� percorrer o vetor, somar todos os valores e exibir o resultado)
5. Relat�rio valores �mpares (Dever� percorrer o vetor e realizar as opera��es: contar os �mpares,
somar os �mpares e exibir o resultado das opera��es)
6. Maiores que (Dever� solicitar um valor entre 1 e 60 para o usu�rio informar, com o valor
informado deve-se percorrer o vetor e exibir todos os valores que contidos maiores que o valor
informado pelo usu�rio)
7. Quantos existem/repetidos (Dever� solicitar do usu�rio um valor inteiro entre 1 e 60, o
programa dever� ent�o percorrer o vetor e contar quantas vezes o n�mero informado pelo
usu�rio existe no vetor e exibir o n�mero de ocorr�ncias encontradas) */

int main(int argc, char *argv[]) {
	int opcao = 0;
	int vetores[60];
	int i, r = 0;
	int soma, quant_impar, soma_impar, valor, contador_repetidos, valor2  = 0; 
	
	do{
		printf("\n \n");
		printf(":::... Sorteio ...:::     \n \n");
		printf("1. Zerar                   \n");
		printf("2. Carregar aleatorio      \n");
		printf("3. Imprimir                \n");
		printf("4. Somar                	\n");
		printf("5. Relatorio valores impares \n");
		printf("6. Maiores que				\n");
		printf("7. Quantos existem repetidos \n");		
		printf("9. Sair                   \n");
		printf("Digite a opcao:");
		scanf("%d", &opcao);
		
		
		if(opcao == 1){
			printf("- Opcao 1 selecionada - \n");
			printf("- Zerando valores - \n");
			for(i = 0; i < 60; i++){
				vetores[i] = -1;
			}
		}else{
			if(opcao == 2){
			printf("- Opcao 2 selecionada - \n");
			printf("- Carregando valores aleatorios - \n");
			for(i = 0; i < 60; i++){
				r = 1 + (rand() % 60);
				vetores[i] = r;
			}	
			}else{
				if(opcao == 3){
					printf("- Opcao 3 selecionada - \n");
					printf("- Imprimindo valores - \n");
					for(i = 0; i < 60; i++){
						printf("O valor de %d e %d \n", i, vetores[i]);
					}
				}else{
					if(opcao ==4){
						printf("- Opcao 4 selecionada - \n");
						printf("- Somando os valores - \n");
						for(i = 0; i < 60; i++){
							soma += vetores[i];
						}
					printf("A soma dos valores e: %d \n", soma);
					}else{
						if(opcao == 5){
						printf("- Opcao 5 selecionada - \n");
						printf("- Contando impares e somando - \n");
						for(i = 0; i < 60; i++){
							if( vetores[i] % 2 != 0)
							quant_impar++;
							soma_impar += vetores[i];
							}	
						printf("- A quantidade de numeros impares e: %d \n", quant_impar);
						printf("- A soma dos numeros impares e: %d \n", soma_impar);
						}else{
							if(opcao == 6){
								printf("- Opcao 6 selecionada - \n");
								printf("- Coloque um valor entre 1 e 60 \n");
								scanf("%d", &valor);
								for(i = 0; i < 60; i++){
									if (vetores[i] < valor){
										printf("%d", vetores[i]);
									}
								}
							}else{
								if(opcao == 7){
									printf("- Opcao 7 selecionada - \n");
									printf("- Digite um valor para ver quantos tem repetidos - \n");
									scanf("%d", &valor2);
									for(i = 0; i < 60; i++){
										if(vetores[i] == valor2){
											contador_repetidos++;
										}
									}
								printf("A quantidade de numeros repetidos e: %d \n", contador_repetidos);
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
