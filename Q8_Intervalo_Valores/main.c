#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*VERIFICAR SE VALOR X ESTÁ DENTRO DE INTERVALO DE VALORES (DADO DOIS INTERVALOS) – Crie uma
aplicação que deverá solicitar 5 valores inteiros quaisquer, a aplicação deverá bloquear a execução
caso exista algum valor repetido entre os 4 primeiros valores, a aplicação deverá utilizar os 2 primeiros
valores e criar um intervalo de valores entre o menor e maior valor, a aplicação deverá realizar o
mesmo procedimento com o 3º e 4º valor fornecido, neste momento a aplicação deverá conter dois
intervalos de valores, por fim, a aplicação deverá verificar se o 5º está dentro do primeiro intervalo, se
está dentro do segundo intervalo, verificar se está dentro do ambos intervalos ou se não está dentro
de nenhum intervalo.*/


int main(int argc, char *argv[]) {
	int v1, v2, v3, v4, v5 = 0; 
	
	
	printf(":::... Verificar se o valor esta dentro dos intervalos ...::: \n \n");
	printf("- Coloque o primeiro valor para o primeiro intervalo - \n");
	scanf("%i", &v1);
	printf("- Coloque o segundo valor para o primeiro intervalo - \n");
	scanf("%i", &v2);
	printf("- Coloque o primeiro valor para o segundo intervalo - \n");
	scanf("%i", &v3);
	printf("- Coloque o segundo valor para o segundo intervalo - \n");
	scanf("%i", &v4);
	printf("- Coloque o valor para ver em qual intervalo ele esta - \n");
	scanf("%i", &v5);
	
	
	
	
	if(v1 == v2){
		printf("Os valores 1 e 2 sao iguais , ERRO \n");
	}else{
		if(v1 == v3){
			printf("Os valores 1 e 3 sao iguais , ERRO \n");
		}else{
			if(v1 == v4){
				printf("Os valores 1 e 4 sao iguais, ERRO \n");
			}else{
				if(v2 == v3){
					printf("Os valores 2 e 3 sao iguais, ERRO \n");
				}else{
					if(v2 == v4){
						printf("Os valores 2 e 4 sao iguais, ERRO \n");
					}else{
						if(v3 == v4){
							printf("Os valores 3 e 4 sao iguais, ERRO \n");
						}
					}
				}
			}
		}
	}
	
	if(v1 > v2){
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}
	
	if(v3 > v4){
		int temp = v3;
		v3 = v4;
		v4 = temp;
	}
	
	if(v5 >= v1 && v5 <= v2 && v5 >= v3 && v5 <= v4){
	printf("O valor esta dentro dos dois intervalos \n");	
	}else{
		if(v5 >= v1 && v5 <= v2){
			printf("O valor esta dentro do primeiro intervalo \n");
		}else{
			if(v5 >= v3 && v5 <= v4){
				printf("O valor esta dentro do segundo intervalo \n");
			}else{
				printf("O valor esta em nenhum intervalo \n");
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
}
