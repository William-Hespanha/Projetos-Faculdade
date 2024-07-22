#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação console, esta aplicação deverá conter dois vetores, cada vetor
deverá armazenar 10 números inteiros, os métodos a serem criados para manipulação deverá atender
a necessidade do menu abaixo descrito, é importante lembrar que somente através dos métodos da
classe os vetores devem ser acessados e manipulados.
MENU - VETORES A e B
1 - Adicionar vetor A
2 - Adicionar vetor B
3 - Remover do vetor A valor da posição X
4 - Remover do vetor B valor da posição X
5 - Imprimir vetor A
6 - Imprimir vetor B
7 - Contar valores vetor A
8 - Contar valores vetor B
9 - Somar valores de cada vetor e apresentar
10 - Qual vetor tem maior quantidade de valores?
11 - Qual vetor tem a maior soma de valores?
12 - Transferir valores Pares do vetor A para o B
13 - Transferir valores Ímpares do vetor B para o A
14 - Media de valores de cada vetor
15 - Qual vetor apresenta a maior média?
16 - Maior valor de cada vetor
17 - Menor valor de cada vetor
18 - Qual vetor apresenta o maior valor?
99 - Sair.
Digite a opção desejada: */


int main(int argc, char *argv[]) {
	int opcao = 0;
	int vetora[10] = {0};
	int vetorb[10] = {0};
	int l, pa, pb, ca, cb, soma, somaa, somab, somaA, somaB, contA, contB = 0;
	
	do{
		printf(":::... Vetores A e B :::...      											\n");
		printf("1.Adicionar vetor A	\n");
		printf("2.Adicionar vetor B \n");
		printf("3.Remover do vetor A valor da posicao X \n");
		printf("4.Remover do vetor B valor da posicao X \n");
		printf("5.Imprimir vetor A\n");
		printf("6.Imprimir vetor B\n");
		printf("7.Contar valores vetor A\n");
		printf("8.Contar valores Vetor B\n");
		printf("9.Somar valores de cada vetor e apresentar\n");
		printf("10.Qual vetor tem a maior quantidade de valores?\n");
		printf("11.Qual vetor tem a maior soma de valores?\n");
		printf("12.Transferir valores Pares do vetor A para o B	\n");
		printf("13.Transferir valores impares do vetor B para o A\n");
		printf("14.Media de valores de cada vetor\n");
		printf("15.Qual vetor apresenta a maior media\n");
		printf("16.Maior valor de cada vetor\n");
		printf("17.Menor valor de cada vetor\n");
		printf("18.Qual vetor apresenta o maior valor?\n");
		printf("99.Sair\n");
		printf("Digite a opcao:");
		scanf("%d", &opcao);
		
		if(opcao == 1){
		 printf("- Opcao 1 selecionada - \n");
		 printf("- Adicione os valores para o VetorA - \n")
		 for(l = 0; l < 10; l++){
		 	scanf("%d", &vetora[l]);
		 }	
			
		}else if (opcao == 2){
			printf("- Opcao 2 selecionada - \n");
			printf("- Adicione os valores para o VetorB - \n");
			for(l = 0; l < 10; l++){
				scanf("%d", &vetorb[l]);
			}
			
		}else if (opcao == 3){
			printf("- Opcao 3 selecionada - \n");
			printf("- Selecione a posicao que deseja remover - \n");
			scanf("%d", &pa);
			for(l = 0; l < 10; l++){
				if(pa >= 0 && pa < 10){
					vetora[pa] = 0;
				}else{
					printf("- Posicao invalida - \n");
				}
			}
			
		}else if (opcao == 4){
			printf("- Opcao 4 selecionada - \n");
			printf("- Selecione a posicao que deseja remover - \n");
			scanf("%d", &pb);
			for(l = 0; l < 10; l++){
				if(pb >= 0 && pb < 10){
					vetorb[pb] = 0;
				}else{
					printf("- Posicao Invalida - \n");
				}
			}
			
		}else if (opcao == 5){
			printf("- Opcao 5 selecionada - \n");
			printf("- Imprimindo valores do VetorA");
			for(l = 0; l < 10; l++){
				printf("O valor da posicao %d e: %d \n", l, vetora[l]);
			}
			
		}else if (opcao == 6){
			printf("- Opcao 6 selecionada - \n");
			printf("- Imprimindo valores do VetorB - \n");
			for(l = 0; l < 10; l++){
				printf("O valor da posicao %d e: %d \n", l, vetorb[l]);
			}
			
		}else if (opcao == 7){
		printf("- Opcao 7 selecionada - \n");
		printf("- Contando valores do VetorA - \n");
		ca = 0;
		for(l = 0; l < 10; l++){
		if(vetora[l] != 0){
			ca++;
			}	
		}	
		printf("- A quantidade de valores no VetorA e de: %d \n", ca);
		
		}else if (opcao == 8){
		printf("- Opcao 8 selecionada - \n");
		printf("- Contando valores do VetorB - \n");
		cb = 0;
		for(l = 0; l < 10; l++){
			if(vetorb[l] != 0){
				cb++;
			}
		}	
		printf("- A quantidade de valores no VetorB e De: %d \n", cb);
		
		}else if (opcao == 9){
		printf("- Opcao 9 selecionada - \n");
		printf("- Somando vetores - \n");
		for(l = 0; l < 10; l++){
			soma += vetora[l];
			soma += vetorb[l];
		}
		printf("- A soma entre os vetores e de: %d \n", soma);
			
		}else if (opcao == 10){
		printf("- Opcao 10 selecionada - \n");
		printf("- Comparando qual vetor tem mais valores - \n");
		ca = 0;
		cb = 0; 
		for(l = 0; l < 10; l++){
			if(vetora[l] != 0){
				ca++;
				
			}
		}
		for(l = 0; l < 10; l++){
			if(vetorb[l] != 0){
				cb++;
			}
		}	
		if(ca > cb){
			printf("- O vetor que mais possui numeros e o VetorA \n");
		}else if (cb > ca){
			printf("- O vetor que mais possui numeros e o vetorB \n");
		}
			
		}else if (opcao == 11){
			printf("- Opcao 11 selecionada - \n");
			printf("- Verificando qual vetor tem a maior soma de valores - \n");
			for(l = 0; l < 10; l++){
				somaa += vetora[l];
				somab+= vetorb[l];
				
			}
			if (somaa > somab){
				printf("- O vetor com a maior soma de valores e o VetorA - \n");
				
			}else if (somab > somaa){
				printf("- O vetor com a maior soma de valores e o VetorB - \n");
				
			}else{
				printf("Os dois valores tem a mesma soma - \n");
			}
			
		}else if (opcao == 12){
		printf("- Opcao 12 selecionada - \n");
		printf("- Passando valores pares do VetorA para o VetorB \n");
		int posb = 0;
		
		for(l = 0; l < 10; l++){
			if(vetora[l] %2 == 0){
				vetorb[posb] = vetora[l];
				vetora[l] = 0;
				posb++;
				
			}
		}	
		printf("- Valores pares foram transferidos para o VetorB \n");
		
			
		}else if (opcao == 13){
		printf("- Opcao 3 selecionada - \n");
		printf(" - Transferindo valores impares para o VetorA \n");
		int posa = 0;
		
		for(l = 0; l < 10; l++){
			if(vetorb[l] % 2 != 0){
				vetora[posa] = vetorb[l];
				vetorb[l] = 0;
				posa++;
			}
		}
		printf("- Valores impares foram trasferidos para o VetorA \n");	
			
		}else if (opcao == 14){
			printf("- Opcao 14 selecionada - \n");
			printf("- Gerando media de cada vetor - \n");
			for(l = 0; l < 10; l++){
				if(vetora[l] !=0){
					somaA += vetora[l];
					contA++;
				}
			if(vetorb[l] != 0){
				somaB += vetorb[l];
				contB++;
				}
			}
		if (contA > 0){
			float mediaA = (float)somaA / contA;
			printf("- A media de valores do VetorA e: %.2f \n", mediaA);
		}else{
			printf("- VetorA esta vazio, nao e possivel calcular a media - \n");
		}
		if(contB > 0){
			float mediaB = (float)somaB / contB;
			printf("- A media de valores do VetorB e: %.2f \n", mediaB);
		}else{
			printf("- VetorB esta vazio, nao e possivel calcular sua media - \n");
		}
			
		}else if (opcao == 15){
			printf("- Opcao 15 selecionada - \n");
			printf("- Verificando qual Vetor tem a maior media - \n");
			 somaA = 0;
			 somaB = 0;
			 contA = 0;
			 contB = 0;
			
			for(l = 0; l < 10; l++){
				if(vetora[l] != 0){
					somaA += vetora[l];
					contA++;
				}
			if(vetorb[l] !=0){
				somaB += vetorb[l];
				contB++;
				}
			}
		if(contA > 0 && contB > 0){
			float mediaA = (float)somaA / contA;
			float mediaB = (float)somaB / contB;
			
			if(mediaA > mediaB){
				printf("- O vetor A tem a maior media: %.2f \n", mediaA);
			}else if(mediaB > mediaA){
				printf("- O vetor B tem a maior media: %.2f \n", mediaB);
			}else{
				printf("- Ambos os vetores tem a mesma media \n");
			}
		}else{
			printf("- Pelo menos um dos vetores esta vazio. ERRO! \n");
		}
		
		}else if (opcao == 16){
		printf("- Opcao 16 selecionada - \n");
		printf("- Verificando qual e o maior valor de cada vetor - \n");
		int maior_valor_a = vetora[0];
		int maior_valor_b = vetorb[0];
		
		for(l = 0; l < 10; l++){
			if(vetora[l] > maior_valor_a){
				maior_valor_a = vetora[l];
			}
		if(vetorb[l] > maior_valor_b){
			maior_valor_b = vetorb[l];
			}
		}
		printf("- O maior valor no VetorA e: %d \n", maior_valor_a);
		printf("- O maior valor no VetorB e: %d \n", maior_valor_b);
			
		}else if (opcao == 17){
		printf("- Opcao 17 selecionada - \n");
		printf("- Verificando menor valor de cada vetor - \n");
		int menor_valor_a = vetora[0];
		int menor_valor_b = vetorb[0];
		for(l = 0; l < 10; l++){
			if(vetora[l] < menor_valor_a){
				menor_valor_a = vetora[l];
			}
			if(vetorb[l] < menor_valor_b){
				menor_valor_b = vetorb[l];
			}
		}
		printf("- O menor valor no VetorA e: %d \n", menor_valor_a);
		printf("- O menor valor no VetorB e: %d \n", menor_valor_b);
		
		}else if (opcao == 18){
		printf("- Opcao 18 selecionada - \n");
		printf("- Encontrando o menor valor de cada vetor - \n");
		int menor_valor_a = vetora[0];
		int menor_valor_b = vetorb[0];
		
		for(l = 0; l < 10; l++){
			if(vetora[l] < menor_valor_a){
				menor_valor_a = vetora[l];
				}
			if(vetorb[l] < menor_valor_b){
				menor_valor_b = vetorb[l];
				}
			}	
		printf("- O menor valor no VetorA e: %d \n", menor_valor_a);
		printf("- O menor valor no VetorB e: %d \n", menor_valor_b);
		}
		
	
	}while (opcao != 99);
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
