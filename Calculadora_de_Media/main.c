#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplica��o console que dado o valor de 3 notas escolares
de 0 a 10 dever� calcular a m�dia. */

int main(int argc, char *argv[]) {
	//V�riaveis
	float m= 0.0;
	float nota1, nota2, nota3 = 0.0;
	
	//Entrada
	printf(":::... Coloque a nota 1...::: \n");
	scanf("%f", &nota1);
	printf(":::... Coloque a nota 2...::: \n");
	scanf("%f", &nota2);
	printf(":::... Coloque a nota 3...::: \n");
	scanf("%f", &nota3);
	
	//Processamento
	m = (nota1 + nota2 + nota3) /3;
	 
	//Sa�da
	printf("Media Final \n");
	printf("%f", m);
	
	
	
	
	return 0;
}
