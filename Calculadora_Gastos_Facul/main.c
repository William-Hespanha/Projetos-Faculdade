#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplica��o consome que dever� calcular o
valor mensal/anual total gasto com a faculdade, esse c�lculo dever� ser composto por: a) Valor da
mensalidade; b) Custo com transporte (van, �nibus, uber, taxi, carona, etc. cada aluno dever� adicionar
o custo de transporte de acordo com seu uso); c) Custo de alimenta��o (lanches, refrigerantes, etc.).
No final o sistema dever� exibir o custo total mensal e anual. */

int main(int argc, char *argv[]) {
	//Variaveis
	float valordamensalidade, custotransporte, custoalimentacao = 0.0;
	float valormensal, valoranual = 0.0;
	
	//Entrada
	printf(":::... Calculadora de gastos com a faculdade ...::: \n");
	printf(":::... Coloque o valor da sua mensalidade ...::: \n");
	scanf("%f", &valordamensalidade);
	printf(":::... Coloque aqui o custo mensal com o transporte ...::: \n");
	scanf("%f", &custotransporte);
	printf(":::... Coloque aqui o seu custo mensal com alimentacao ...::: \n");
	scanf("%f", &custoalimentacao);
	
	//Processamento
	valormensal= valordamensalidade + custotransporte + custoalimentacao;
	valoranual= valormensal * 12;
	
	//Saida
	printf("O gasto mensal com a faculdade e: %f \n" , valormensal);
	printf("O gasto anual com a faculdadee: %f \n", valoranual);
	
	

	return 0;
}
