#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplica��o que � respons�vel por apresentar o valor total de
uma presta��o/parcela/mensalidade que foi paga em atraso (para melhor entendimento considere o
exemplo de pagar uma mensalidade da faculdade em atraso), a formula para realizar o c�lculo da
presta��o �: VALOR DA PARCELA EM ATRASO = VALOR PARCELA REAL + ((VALOR PARCELA REAL *
PERCENTUAL ACR�SCIMO/JUROS) / 100). */

int main(int argc, char *argv[]) {
	float parcela_real, parcela_atraso, percentual_acrescimo, juros, parcela_final = 0.0;
	
	scanf("%f", &parcela_real);
	scanf("%f", &percentual_acrescimo);
	scanf("%f", &juros);
	
	
	parcela_atraso = parcela_real + ((parcela_real * percentual_acrescimo / juros) /100);
	parcela_final = parcela_atraso + parcela_real;
	
	printf("O valor da parcela em atraso e de %0.2f", parcela_atraso);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
