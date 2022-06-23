/*Incluir bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Corpo do código*/
int main(){
	
	/*Comando para aceitar palavras em português e caracteres especiais*/
	setlocale(LC_ALL, "portuguese");
	
	/*CriaÃ§Ã£oo de variaveis*/
	int num1; int num2; int op; int soma; int sub; int mult; int divs;
	
	printf("Este programa tem a função de executar operações básicas ! \n\n");
	 
	/*Campo de inserção de valor para a variável*/
	printf("Insira um número: ");
	scanf("%i",&num1);
	
	printf("\n\nInsira outro número: ");
	scanf("%i",&num2);
	
	/*Campo para inserção de operação*/
	printf("\n\nEscolha a operação [1]Somar  [2]Subtrair  [3]Multiplicar  [4]Dividir [5]Sair: \n");
	scanf("%i",&op);
	
	/*Estrutura de decisão "Switch/Case", que executa as opções segundo o que foi inserido na variável "op"*/
	switch (op
	){
		/*Operação: Soma*/
		case 1:
			soma=num1+num2;
			printf("\n\nA soma dos valores será: %i", soma);
			break;
			
		/*Operação: Subtrair*/
		case 2:
			sub=num1-num2;
			printf("\n\nA subtração dos valores será: %i", sub);
			break;	
			
		/*Operação:: Multiplicação*/	
		case 3: 
			mult=num1*num2;
			printf("\n\nA multiplicação dos valores será: %i", mult);
			break;	
			
		/*Operação: Soma*/	
		case 4:
			divs=num1/num2;
			printf("\n\nA divisão dos valores será: %i", divs);
			break;
		/*Sair*/	
		case 5:
			break;	
			
		/*Operação: Soma*/		
		default:
			printf("O número selecionado é inválido!");	
			break;							
	}
return 0;
}





