#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie uma aplica��o que forne�a v�rias informa��es salariais referente
ao sal�rio de um determinado professor que ganha R$ 25,00 por hora/aula. A aplica��o criada dever�
solicitar do usu�rio a quantidade de aulas semanais que o professor leciona, a partir do n�mero de
horas semanais fornecidas o programa dever� exibir as seguintes informa��es: a) Sal�rio mensal do
professor (considere que cada m�s � composto por 4 semanas); b) Valor do vale alimenta��o que
corresponde a 10% do sal�rio mensal; Valor do aux�lio transporte que corresponde a 6% do sal�rio
mensal; c) Sal�rio total bruto que corresponde ao sal�rio mensal acrescido do vale alimenta��o e
aux�lio transporte; d) Valor de desconto de INSS que corresponde a 3% do sal�rio mensal e desconto
de IR que corresponde a 4% do sal�rio mensal; e) Valor do sal�rio l�quido, que corresponde ao sal�rio
bruto mensal deduzido os descontos.*/
int main(int argc, char *argv[]) {
	float professor = 25.0;
	float quant_aulas, salario_mensal, vale_alimentacao, auxilio_transporte, salario_bruto, inss, ir, salario_liquido = 0.0;
	
	printf("...::: Calculadora de media do professor ...::: \n \n");
	printf("- Coloque a quantidade de aulas que o professor deu na semana - \n");
	scanf("%f", &quant_aulas);
	
	salario_mensal = quant_aulas * 4 * professor;
	
	vale_alimentacao = 0.10 * salario_mensal;
	
	auxilio_transporte = 0.06 * salario_mensal;
	
	salario_bruto = salario_mensal + vale_alimentacao + auxilio_transporte; 
	
	inss = 0.03 * salario_mensal;	
	
	ir = 0.04 * salario_mensal;
	
	salario_liquido = salario_bruto - (inss + ir);
	
	
	//Saida
	
	printf("O salario mensal do professor e de: %0.2f \n", salario_mensal);
	printf("O valor do vale alimentacao do professor e de : %0.2f \n", vale_alimentacao);
	printf("O valor do vale transporte do professor e de: %0.2f \n", auxilio_transporte);
	printf("O salario bruto desse professor e de: %0.2f \n", salario_bruto);
	printf("O desconto do INSS do salario do professor e de: %0.2f \n", inss);
	printf("O desconto do IR do salario do professor e de: %0.2f \n", ir);
	printf("O salario liquido desse professor e de: %0.2f", salario_liquido);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
