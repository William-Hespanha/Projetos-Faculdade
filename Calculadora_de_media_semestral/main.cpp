#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie uma aplicação console que dados o valor
de 04 (notas: atividades presenciais, atividade online, prova 1, prova 2) notas escolares de 0 a 10 deverá
calcular a média levando em consideração os pesos 10%, 20%, 30% e 40% */

int main(int argc, char** argv) {
			//Váriaveis
	float m = 0.0;
	float atividadespresenciais, atividadeonline, prova1, prova2 = 0.0;
	
	//Entrada
	printf(":::... Calculadora de media do semetre ...::: \n \n");
	printf(":::... Coloque a nota das atvidades presenciais ...::: \n");
	scanf("%f", &atividadespresenciais);
	printf(":::... Coloque a nota das atividades online ...::: \n");
	scanf("%f", &atividadeonline);
	printf(":::... Coloque a nota da prova 1 ...::: \n");
	scanf("%f", &prova1);
	printf(":::... Coloque a nota da prova 2 ...::: \n");
	scanf("%f", &prova2);
	
	//Processamento
	m = (atividadespresenciais * 0.10) + (atividadeonline * 0.20) + (prova1 * 0.30) + (prova2 * 0.40); 
	 
	//Saída
	printf("Media Final do semestre e: %0.2f", m);
	
	
	
	
	 
	
	return 0;
}
