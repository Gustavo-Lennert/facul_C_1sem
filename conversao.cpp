/*Inserção de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define milhas 1.609
#define metros 1000
#define cent 100000

/*Criação do corpo do código*/
int main(){
	
	/*Comando para inclusão de acentos e palavras da língua portuguesa*/
	setlocale(LC_ALL, "portuguese");
	
	/*Criação de variáveis*/
	float km; float calc;
	
	
	/*Apresentação da função do código*/
	printf("\n Este programa faz a conversão de um valor em KM para Milhas, Metros e Centímetro! \n\n ");
	
	/*Inserção da quilometragem, para armazenar na variável km*/
	printf("\n Insira uma quilometragem: ");
	
	/*Armazenamento do valor digitado*/
	scanf("%f", &km);
	
	printf("\n\n--------------Conversões-----------------\n");
	
	calc = km / milhas;
	printf("\nMilhas: %f\n", calc);
	
	calc = km * metros;
	printf("\nMetros: %.2f\n", calc);
	
	calc = km * cent;
	printf("\nCentímetros: %.2f\n", calc);
	

	/*Fim da execução!*/
	return 0;
}










