#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie uma aplicação que forneça várias informações salariais referente
ao salário de um determinado professor que ganha R$ 25,00 por hora/aula. A aplicação criada deverá
solicitar do usuário a quantidade de aulas semanais que o professor leciona, a partir do número de
horas semanais fornecidas o programa deverá exibir as seguintes informações: a) Salário mensal do
professor (considere que cada mês é composto por 4 semanas); b) Valor do vale alimentação que
corresponde a 10% do salário mensal; Valor do auxílio transporte que corresponde a 6% do salário
mensal; c) Salário total bruto que corresponde ao salário mensal acrescido do vale alimentação e
auxílio transporte; d) Valor de desconto de INSS que corresponde a 3% do salário mensal e desconto
de IR que corresponde a 4% do salário mensal; e) Valor do salário líquido, que corresponde ao salário
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
