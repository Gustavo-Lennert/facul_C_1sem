/*Inser��o de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Cria��o do corpo do c�digo*/
int main(){
	
	/*Comando para inclus�o de acentos e palavras da l�ngua portuguesa*/
	setlocale(LC_ALL, "portuguese");
	
	/*Cria��o de vari�veis*/
	float circunfCint, circunfQuad, calc;
	
	/*Apresenta��o da fun��o do c�digo*/
	printf("\nEste programa efetua o calculo de RCQ (Rela��o Cintura-Quadril)!\n\n ");
	
	/*Inser��o do valor da circunfer�ncia da cintura para armazenar na vari�vel circunfCint*/
	printf("\nInsira o valor correspondente a circunfer�ncia da Cintura (use somente v�rgula): ");
	
	/*Armazenamento do valor digitado*/
	scanf("%f", &circunfCint);
	
	
	/*Inser��o do valor da circunfer�ncia do quadril para armazenar na vari�vel circunfQuad*/
	printf("\nInsira o valor correspondente a circunfer�ncia do Quadril (use somente v�rgula): ");
	
	scanf("%f", &circunfQuad);
	
	/*Execu��o do calculo RCQ*/		
	calc = circunfCint / circunfQuad;
	
	/*Apresenta��o do resultado*/
	printf("\n\nRCQ: %.3f", calc); 


	/*Fim da execu��o*/
	return 0;
}

