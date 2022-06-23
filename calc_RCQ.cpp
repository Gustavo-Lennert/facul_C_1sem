/*Inserção de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Criação do corpo do código*/
int main(){
	
	/*Comando para inclusão de acentos e palavras da língua portuguesa*/
	setlocale(LC_ALL, "portuguese");
	
	/*Criação de variáveis*/
	float circunfCint, circunfQuad, calc;
	
	/*Apresentação da função do código*/
	printf("\nEste programa efetua o calculo de RCQ (Relação Cintura-Quadril)!\n\n ");
	
	/*Inserção do valor da circunferência da cintura para armazenar na variável circunfCint*/
	printf("\nInsira o valor correspondente a circunferência da Cintura (use somente vírgula): ");
	
	/*Armazenamento do valor digitado*/
	scanf("%f", &circunfCint);
	
	
	/*Inserção do valor da circunferência do quadril para armazenar na variável circunfQuad*/
	printf("\nInsira o valor correspondente a circunferência do Quadril (use somente vírgula): ");
	
	scanf("%f", &circunfQuad);
	
	/*Execução do calculo RCQ*/		
	calc = circunfCint / circunfQuad;
	
	/*Apresentação do resultado*/
	printf("\n\nRCQ: %.3f", calc); 


	/*Fim da execução*/
	return 0;
}

