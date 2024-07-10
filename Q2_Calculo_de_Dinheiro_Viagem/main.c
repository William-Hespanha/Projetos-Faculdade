#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um programa para calcular várias informações financeiras
de um grupo de 4 amigos brasileiros que deseja viajar para um intercambio, o programa deverá
solicitar: a) Cotação diária das seguintes moedas, Dólar, Euro e Libra Esterlina;
b) O primeiro Nome (estude como armazenar nomes na linguagem C) e quantidade de Reais que cada
um dos 4 amigos deseja levar.
Após informar todos os dados, o programa deverá exibir os seguintes resultados:
a) Deverá exibir a soma total juntando todos os valores em reais dos amigos.
b) Deverá exibir o nome e valor do amigo que contiver a maior quantidade de reais.
c) Deverá exibir o nome e valor do amigo que contiver a menor quantidade de reais.
d) Deverá exibir o nome de cada um dos amigos e também a quantidade de dinheiro que cada um
terá para gastar na viagem já convertida em cada das moedas (aplique o valor das cotações), a
mensagem deverá ser algo como “Joao tem X reais, convertidos terá Y dólares, Z euros e W
libras.”
e) Deverá exibir também os valores ordenados em reais do menor para o maior. */
int main(int argc, char *argv[]) {
	char nome [20];
	char nome2 [20];
	char nome3 [20];
	char nome4 [20];
	float real, real2, real3, real4, dolar, dolar2, dolar3, dolar4, euro, euro2, euro3, euro4, libra, libra2, libra3, libra4, totalreais = 0.0;
	float cotacao_dolar, cotacao_euro, cotacao_libra = 0.0;
	
	//Cotações do dia
	printf(":::... Calculo para Viagem ...::: \n \n");
	printf("- Coloque a cotacao do Dolar - \n");
	scanf("%f", &cotacao_dolar);
	printf("- Coloque a cotacao do Euro - \n");
	scanf("%f", &cotacao_euro);
	printf("- Coloque a cotacao da Libra \n");
	scanf("%f", &cotacao_libra);
	
	
	
	//Amigo 1
	printf("- Coloque o nome do primeiro amigo - \n");
	scanf("%s", &nome );
	printf("- Coloque quantos reais ele ira levar \n");
	scanf("%f", &real);
	
	//Amigo 2
	printf("- Coloque o nome do segundo amigo - \n");
	scanf("%s", &nome2);
	printf("- Coloque quantos reais o segundo amigo ira levar - \n");
	scanf("%f", &real2);
	
	//Amigo 3
	printf("- Coloque o nome do terceiro amigo - \n");
	scanf("%s", &nome3);
	printf("- Coloque quantos reais o terceiro amigo ira levar - \n");
	scanf("%f", &real3);
	
	//Amigo 4
	printf("- Coloque o nome do quarto amigo - \n");
	scanf("%s", &nome4);
	printf("- Coloque quantos reais o quaarto amigo ira levar \n");
	scanf("%f", &real4);
	
	totalreais = real + real2 + real3+ real4;
	
	//Conversões
	dolar = real / cotacao_dolar;
	dolar2 = real2 / cotacao_dolar;
	dolar3 = real3 / cotacao_dolar;
	dolar4 = real4 / cotacao_dolar;
	
	euro = real / cotacao_euro;
	euro2 = real2 / cotacao_euro;
	euro3 = real3  / cotacao_euro;
	euro4 = real4 / cotacao_euro;
	
	libra = real / cotacao_libra;
	libra2 = real2 / cotacao_libra;
	libra3 = real3 / cotacao_libra;
	libra4 = real4 / cotacao_libra;
	
	printf("No total os 4 amigos estao levando %0.2f Reais \n", totalreais);
	
	
	float maior_valor = real;
	float menor_valor = real; 
	
	//Mais Reais
	if(maior_valor < real2){
		maior_valor = real2;
	}
	
	if(maior_valor < real3){
		maior_valor = real3;
	}
						
	if(maior_valor < real4){
		maior_valor = real4;
	}				
					
		
	//Menos Reais
	if(menor_valor > real2){
		menor_valor = real2;
	}
	
	if(menor_valor > real3){
		menor_valor = real3;
	}
	
	if(menor_valor > real4){
		menor_valor = real4;
	}
	
	//Ordenar
	if(maior_valor == real){
		printf("A pessoa com o maior valor e: %s %0.2f \n", nome, real);
	}
	
	if(maior_valor == real2){
		printf("A pessoa com o maior valor e: %s %0.2f \n", nome2, real2);
	}
	
	if(maior_valor == real3){
		printf("A pessoa com o maior valor e: %s %0.2f \n", nome3, real3);
	}
	
	if(maior_valor == real4){
		printf("A pessoa com o maior valor e: %s %0.2f \n", nome4, real4);
	}
	
	
	if(menor_valor == real){
		printf("A pessoa com o menor valor e: %s %0.2f \n", nome, real);
	}
	
	if(menor_valor == real2){
		printf("A pessoa com o menor valor e: %s %0.2f \n", nome2, real2);
	}
	
	if(menor_valor == real3){
		printf("A pessoa com o menor valor e: %s %0.2f \n", nome3, real3);
	}
	
	if(menor_valor == real4){
		printf("A pessoa com o menor valor e: %s %0.2f \n", nome4, real4);
	}
	
	printf("O %s levara %0.2f Reais %0.2f Dolares %0.2f Euros e %0.2f Libras \n", nome, real, dolar, euro, libra);
	printf("O %s levara %0.2f Reais %0.2f Dolares %0.2f Euros e %0.2f Libras \n", nome2, real2, dolar2, euro2, libra2);
	printf("O %s levara %0.2f Reais %0.2f Dolares %0.2f Euros e %0.2f Libras \n", nome3, real3, dolar3, euro3, libra3);
	printf("O %s levara %0.2f Reais %0.2f Dolares %0.2f Euros e %0.2f Libras \n", nome4, real4, dolar4, euro4, libra4);
	
	if(real > real2){
		float temp = real;
		real = real2;
		real2 = temp;  
	}
	
	if(real > real3){
		float temp = real;
		real = real3;
		real3 = temp;
	}
	
	if(real > real4){
		float temp = real;
		real = real4;
		real4 = temp;
	}
	
	
	if(real2 > real3){
		float temp = real2;
		real2 = real3;
		real3 = temp;
	}
	
	if(real2 > real3){
		float temp = real2;
		real2 = real3;
		real3 = temp;
	}
	
	if(real2 > real4){
		float temp = real2;
		real2 = real4;
		real4 = temp;
	}
	
	if(real3 > real4){
		float temp = real3;
		real3 = real4;
		real4 = temp;
	}
	
	
	printf("Os valores ordenados de quanto cada um levou em R$ sao: %0.2f, %0.2f, %0.2f e %0.2f \n", real, real2, real3, real4);
	
	
	
	
	
	
	return 0;
}
