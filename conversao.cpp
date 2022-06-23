/*Inser��o de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define milhas 1.609
#define metros 1000
#define cent 100000

/*Cria��o do corpo do c�digo*/
int main(){
	
	/*Comando para inclus�o de acentos e palavras da l�ngua portuguesa*/
	setlocale(LC_ALL, "portuguese");
	
	/*Cria��o de vari�veis*/
	float km; float calc;
	
	
	/*Apresenta��o da fun��o do c�digo*/
	printf("\n Este programa faz a convers�o de um valor em KM para Milhas, Metros e Cent�metro! \n\n ");
	
	/*Inser��o da quilometragem, para armazenar na vari�vel km*/
	printf("\n Insira uma quilometragem: ");
	
	/*Armazenamento do valor digitado*/
	scanf("%f", &km);
	
	printf("\n\n--------------Convers�es-----------------\n");
	
	calc = km / milhas;
	printf("\nMilhas: %f\n", calc);
	
	calc = km * metros;
	printf("\nMetros: %.2f\n", calc);
	
	calc = km * cent;
	printf("\nCent�metros: %.2f\n", calc);
	

	/*Fim da execu��o!*/
	return 0;
}










