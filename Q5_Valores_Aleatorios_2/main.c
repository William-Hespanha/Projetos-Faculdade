#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplica��o console em C respons�vel por armazenar 60 valores
inteiros, a aplica��o dever� conter um menu de console com as op��es abaixo relacionada:
..:: SORTEIO 2 ::..
1. Zerar (dever� percorrer o vetor e atribuir valor -1 a todos os endere�os)
2. Carregar aleat�rio (dever� carregar o vetor com valores inteiros aleat�rios entre 1 e 60)
3. Imprimir (dever� percorrer o vetor e exibir todos os valores armazenados)
4. Entre valores (dever� solicitar dois valores (ambos entre 1 e 60) do usu�rio, com base nos
valores fornecidos, dever� percorrer o vetor e exibir todos os valores armazenados que est�o
entre os valores fornecidos, por exemplo, se o usu�rio informar os valores 13 e 20, todos os
valores armazenados entre 13 e 20 presentes no vetor dever�o ser exibidos)
5. Exibir repetidos (dever� percorrer o vetor e ent�o verificar quantas vezes cada valor presente
no vetor existe, somente valores que contiver alguma repeti��o dever�o ser exibidos, por
exemplo, se o valores armazenados s�o 5, 12, 60, 3, 12, 3, 1, a resposta dever� ser 12 = 2, 3 = 2
pois o n�meros 12 e 3 aparecem 2 vezes. Dicas: a) crie dois loopings, o segundo dentro do
primeiro, o primeiro ser� respons�vel por percorrer cada posi��o do vetor e o segundo contar�
a quantidade de repeti��es que existe para cada posi��o acessada do primeiro; b) Se
considerarmos o exemplo apresentado, ser�o apresentadas 4 mensagens, 12 = 2, 3 = 2, 12 = 2
e 3 = 2, isso ocorre por que na primeira ocorr�ncia do n�mero 12 haver� uma contagem e ele
aparece 2x ent�o ser� exibida a primeira mensagem, quando estiver na segunda ocorr�ncia do
n�mero 12 tamb�m ser� computado que o mesmo aparece 2x, ent�o ser� novamente exibida
a mensagem, n�o se preocupe com essa situa��o de aparecer mensagens repetidas). */


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
