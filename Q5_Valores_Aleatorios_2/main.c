#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação console em C responsável por armazenar 60 valores
inteiros, a aplicação deverá conter um menu de console com as opções abaixo relacionada:
..:: SORTEIO 2 ::..
1. Zerar (deverá percorrer o vetor e atribuir valor -1 a todos os endereços)
2. Carregar aleatório (deverá carregar o vetor com valores inteiros aleatórios entre 1 e 60)
3. Imprimir (deverá percorrer o vetor e exibir todos os valores armazenados)
4. Entre valores (deverá solicitar dois valores (ambos entre 1 e 60) do usuário, com base nos
valores fornecidos, deverá percorrer o vetor e exibir todos os valores armazenados que estão
entre os valores fornecidos, por exemplo, se o usuário informar os valores 13 e 20, todos os
valores armazenados entre 13 e 20 presentes no vetor deverão ser exibidos)
5. Exibir repetidos (deverá percorrer o vetor e então verificar quantas vezes cada valor presente
no vetor existe, somente valores que contiver alguma repetição deverão ser exibidos, por
exemplo, se o valores armazenados são 5, 12, 60, 3, 12, 3, 1, a resposta deverá ser 12 = 2, 3 = 2
pois o números 12 e 3 aparecem 2 vezes. Dicas: a) crie dois loopings, o segundo dentro do
primeiro, o primeiro será responsável por percorrer cada posição do vetor e o segundo contará
a quantidade de repetições que existe para cada posição acessada do primeiro; b) Se
considerarmos o exemplo apresentado, serão apresentadas 4 mensagens, 12 = 2, 3 = 2, 12 = 2
e 3 = 2, isso ocorre por que na primeira ocorrência do número 12 haverá uma contagem e ele
aparece 2x então será exibida a primeira mensagem, quando estiver na segunda ocorrência do
número 12 também será computado que o mesmo aparece 2x, então será novamente exibida
a mensagem, não se preocupe com essa situação de aparecer mensagens repetidas). */


int main(int argc, char *argv[]) {
	int opcao = 0;
	int vetores[60];
	int i, r, valor, valor2, j  = 0;
	
	do{
		printf("\n \n \n");
		printf("Calculadora Basica        		\n");
		printf("1. Zerar                 		\n");
		printf("2. Carregar aleatorio     		\n");
		printf("3. Imprimir            			\n");
		printf("4. Entre Valores                \n");
		printf("5. Exibir Repetidos				\n");
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
					printf("- Imprimindo Valores - \n");
					for(i = 0; i < 60; i++){
						printf("O valor da posicao %d e %d \n", i, vetores[i]);
					}
				}else{
					if(opcao == 4){
						printf("- Opcao 4 selecionada - \n");
						printf("- Coloque o valor entre 1 e 60 para saber em qual posicao ele se encontra \n");
						scanf("%d", &valor);
						scanf("%d", &valor2);
						if(valor2 < valor){
							int temp = valor;
							valor2 = valor;
							valor = temp;
						}
						for(i = 0; i < 60; i++){
							if(vetores[i] >= valor &&  vetores[i] <= valor2){
								printf("O intervalo dos valores %d e %d foi encontrado na posicao %d \n", valor, valor2, i);
							}
						}
					}else{
						if(opcao == 5){
						for(i = 0; i < 60; i++){
							int contagem = 0;
							for(j = i + 1; j < 60; j++){
								if(vetores[i] == vetores[j]){
									contagem++;
									}
								}
							if(contagem > 0){
								printf("%d = %d \n", vetores[i], contagem + 1);
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
