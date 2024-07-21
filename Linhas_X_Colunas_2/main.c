#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma matriz capaz de armazenar 30 valores inteiros, baseado nesta matriz
implemente o menu abaixo, cada uma das opções do menu deverá executar uma ação sobre a matriz.
MENU – LINHAS X COLUNAS 2
1. Carregar aleatório (considerar valores entre 0 e 50)
2. Imprimir todos
3. Soma por linha (apresente o número de cada linha e a soma dos valores da linha correspondente)
4. Soma por coluna (apresente o número de cada coluna e a soma dos valores da coluna)
5. Linha com a maior soma (apresente a linha que contém a maior soma dentre as somas das linhas)
6. Coluna com maior soma (idem ao item 4)
7. Maior soma linha x coluna y (solicite o número de uma linha e coluna do usuário, some os valores
da linha e da coluna e verifique qual contém o maior valor, é importante verificar se o número da linha
e coluna fornecido existe na matriz)
9. Sair 
*/


int main(int argc, char *argv[]) {
	int opcao = 0;
	int matriz[10][3];
	int l, c = 0;
	int maior_soma = 0;
	int linha_maior_soma, coluna_maior_soma = -1;
	int linhax, colunay = 0;
	
	do{
		printf("									\n");
		printf("LINHAS X COLUNAS      			\n");
		printf("1. Carregar aleatório     			\n");
		printf("2. Imprimir todos         			\n");
		printf("3. Somar por linha        			\n");
		printf("4. Somar por coluna       			\n");
		printf("5. Linha com maior soma				\n");
		printf("6. Coluna com maior soma			\n");
		printf("7. Maior soma linha x coluna y		\n");
		printf("9. Sair                   \n");
		printf("Digite a opcao:");
		scanf("%d", &opcao);
		
		
		
		if(opcao == 1){
			printf("- Opcao 1 selecionada - \n");
			printf("- Gerando valores aleatorios - \n");
			for(l = 0; l < 10; l++){
				for(c = 0; c < 3; c++){
					matriz[l][c] = rand() %31;
				}
			}
			
		}else{
			if(opcao == 2){
			printf("- Opcao 2 selecionada - \n");
			printf("- Imprimindo valores - \n");
			for(l = 0; l < 10; l++){
				for(c = 0; c < 3; c++){
					printf("O valor da linha %d e coluna %d e: %d \n", l, c, matriz[l][c]);
				}
			}	
				
			}else{
				if(opcao == 3){
				printf("- Opcao 3 selecionada - \n");
				printf("- Somando linhas - \n");	
				for(l = 0; l < 10; l++){
					int soma_linha = 0;
					for(c = 0; c < 3; c++){
						soma_linha += matriz[l][c];
					}
				printf("A soma do valor da linha %d e: %d \n", l, soma_linha);
				}
					
				}else{
					if(opcao == 4){
					printf("- Opcao 4 selecionada - \n");
					printf("- Somando Colunas - \n");
					for(c = 0; c < 3; c++){
						int soma_coluna = 0;
						for(l = 0; l < 10; l++){
							soma_coluna += matriz[l][c];
						}
					printf("A soma do valor da coluna %d e: %d \n", c, soma_coluna);
					}	
						
					}else{
						if(opcao == 5){
							printf("Opcao 5 selecionada - \n");
							printf("- Verificando linha com maior soma - \n");
							for(l = 0; l < 10; l++){
								int soma_linha = 0;
								for(c = 0; c < 3; c++){
									soma_linha += matriz[l][c];
								}
							if(soma_linha > maior_soma){
								maior_soma = soma_linha;
								linha_maior_soma = l;
								}
							}
							if(linha_maior_soma != -1){
								printf("A linha com a maior soma e: %d com a soma de: %d \n", linha_maior_soma, maior_soma);
							}else{
								printf("Nao foi possivel encontrar a linha com a maior soma \n");
							}
							
						}else{
							if(opcao == 6){
							printf("- Opcao 6 selecionada - \n");
							printf("- Verificando Coluna com maior soma - \n");	
							for(c = 0; c < 3; c++){
								int soma_coluna = 0;
								maior_soma = 0;
								for(l = 0; l < 10; l++){
									soma_coluna += matriz[l][c];
								}
							if(soma_coluna > maior_soma){
								maior_soma = soma_coluna;
								coluna_maior_soma = 1;
								}
							}
							if(coluna_maior_soma != -1){
								printf("A Coluna com a maior soma e: %d com a soma de %d \n", coluna_maior_soma, maior_soma);
							}else{
								printf("Nao foi possivel encontrar a coluna com a maior soma \n");
							}	
							}else{
								if(opcao == 7){
								printf("- Opcao 7 selecionada - \n");
								printf("Coloque a linha e a coluna que deseja verificar \n");
								printf("- Linha - \n");
								scanf("%d", &linhax);
								printf("- Coluna - \n");
								scanf("%d", &colunay);
								if(linhax >= 0 && linhax <= 10 && colunay >= 0 && colunay <= 3){
								int soma_linha = 0;
								int soma_coluna = 0;
								for(c = 0; c < 3; c++){
										soma_linha += matriz[linhax][c];
										}	
									for(l = 0; l < 10; l++){
										soma_coluna += matriz[l][colunay];
										}
									printf("A soma da linha %d e: %d \n", linhax, soma_linha);
									printf("A soma da coluna $d e: %d \n", colunay, soma_coluna);
									if(soma_linha > soma_coluna){
										printf("A linha %d possui a maior soma com valor %d \n", linhax, soma_linha);
										}else if(soma_coluna > soma_linha){
											printf("A Coluna %d possui a maior soma com valor %d \n", colunay, soma_coluna);
										}else{
											printf("A soma da linha %d e da coluna %d sao iguais: %d", linhax, colunay, soma_linha);
										}
									
									}else{
										printf("Linha e ou Coluna nao encontradas! \n");
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
