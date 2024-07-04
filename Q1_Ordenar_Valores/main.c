#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação que solicite do usuário 3 valores inteiros quaisquer em qualquer ordem,
os valores deverão ser apresentados ordenados */

int main(int argc, char *argv[]) {
	//Variaveis
	int v1, v2, v3 = 0;
	
	//Entrada
	printf("...::: Ordenar valores ...::: \n \n");
	printf("...::: Insira o primeiro valor ...::: \n");
	scanf("%i", &v1);
	printf("...::: Insira o segundo valor ...::: \n");
	scanf("%i", &v2);
	printf("...::: Insira o terceiro valor ...::: \n");
	scanf("%i", &v3);
	

	
	
	
	
	//Desvio Condicional
	if (v1 > v3){
		int tmp = v3;
		v3 = v1;
		v1 = tmp;
	}
	
	if (v1 > v2){
		int tmp = v2; 
		v2 = v1;
		v1 = tmp; 
	}
	
	if (v2 > v3){
		int tmp = v3;
		v3 = v2;
		v2 = tmp;
	}
	
	printf("Os valores ordenados sao: %d, %d, %d", v1, v2, v3);
	
	
	
	return 0;
}
