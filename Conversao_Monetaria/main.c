#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie uma aplica��o que deve receber do usu�rio um determinado
valor em REAIS, e tamb�m a cota��o do Dolar e Euro, baseado nestas informa��es, o programa dever�
calcular e apresentar qual o valor que o usu�rio tem em Dol�res e Euros convertidos.*/

int main(int argc, char *argv[]) {
	float real, cotacao_dolar, cotacao_euro, dolar, euro = 0.0;
	
	printf(":::... Conversor de Moedas ...::: \n \n");
	printf("- Coloque quantos Reais o usuario tem - \n");
	scanf("%f", &real);
	printf("- Coloque a cotacao do Dolar - \n");
	scanf("%f", &cotacao_dolar);
	printf("- Coloque a cotacao do Euro - \n");
	scanf("%f", &cotacao_euro);
	
	
	dolar = real / cotacao_dolar;
	euro = real / cotacao_euro;
	
	
	printf("O usuario tera %0.2f Dolares \n", dolar);
	printf("O usuatio tera %0.2f Euros \n", euro);	
	
	
	
	
	
	
	
	 
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
