/*Incluir bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Corpo do c�digo*/
int main(){
	
	/*Comando para aceitar palavras em portugu�s e caracteres especiais*/
	setlocale(LC_ALL, "portuguese");
	
	/*Criaçãoo de variaveis*/
	int num1; int num2; int op; int soma; int sub; int mult; int divs;
	
	printf("Este programa tem a fun��o de executar opera��es b�sicas ! \n\n");
	 
	/*Campo de inser��o de valor para a vari�vel*/
	printf("Insira um n�mero: ");
	scanf("%i",&num1);
	
	printf("\n\nInsira outro n�mero: ");
	scanf("%i",&num2);
	
	/*Campo para inser��o de opera��o*/
	printf("\n\nEscolha a opera��o [1]Somar  [2]Subtrair  [3]Multiplicar  [4]Dividir [5]Sair: \n");
	scanf("%i",&op);
	
	/*Estrutura de decis�o "Switch/Case", que executa as op��es segundo o que foi inserido na vari�vel "op"*/
	switch (op
	){
		/*Opera��o: Soma*/
		case 1:
			soma=num1+num2;
			printf("\n\nA soma dos valores ser�: %i", soma);
			break;
			
		/*Opera��o: Subtrair*/
		case 2:
			sub=num1-num2;
			printf("\n\nA subtra��o dos valores ser�: %i", sub);
			break;	
			
		/*Opera��o:: Multiplica��o*/	
		case 3: 
			mult=num1*num2;
			printf("\n\nA multiplica��o dos valores ser�: %i", mult);
			break;	
			
		/*Opera��o: Soma*/	
		case 4:
			divs=num1/num2;
			printf("\n\nA divis�o dos valores ser�: %i", divs);
			break;
		/*Sair*/	
		case 5:
			break;	
			
		/*Opera��o: Soma*/		
		default:
			printf("O n�mero selecionado � inv�lido!");	
			break;							
	}
return 0;
}





