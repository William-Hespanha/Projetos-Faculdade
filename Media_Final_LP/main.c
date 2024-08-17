#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie uma aplicação que calcule a média final de um determinado aluno, a
regra para cálculo da média final é data através da imagem abaixo: Atenção o programa deverá exibir
a nota da NP1, NP2 e também MF. */

int main(int argc, char *argv[]) {
	float atividades, ead, av1, atividades2, ead2, pluri, av2, np1, np2, media = 0.0;
	
	printf(":::... Calculadora de media final ...::: \n \n");
	printf("- Coloque a nota da atividade 1 - \n");
	scanf("%f", &atividades);	
	printf("- Coloque a nota do EAD - \n");
	scanf("%f", &ead);
	printf("- Coloque a nota da Avaliacao 1 - \n");
	scanf("%f", &av1);
	printf("- Coloque a nota da atiidade 2 - \n");
	scanf("%f", &atividades2);
	printf("- Coloque a nota do EAD 2 - \n");
	scanf("%f", &ead2);
	printf("- Coloque a nota PLURI - \n");
	scanf("%f", &pluri);
	printf("- Coloque a nota da avaliacao 2 - \n");
	scanf("%f", &av2);
	
	
	np1 = (atividades * 0.2) + (ead * 0.2) + (av1 * 0.6);
	
	np2 = (atividades2 * 0.2 ) + (ead2 * 0.2) + (pluri * 0.2) + (av2 * 0.4);
	
	
	media = (np1 * 0.4) + (np2 * 0.6) ;
	
	printf("A NP1 do aluno foi de: %0.2f \n",np1);
	printf("A NP2 do aluno foi de: %0.2f \n",np2);
	printf("A media do aluno foi de: %0.2f \n", media);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
