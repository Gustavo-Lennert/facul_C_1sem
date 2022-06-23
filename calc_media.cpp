/*Incluir bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Corpo do código*/
int main(){
	
	/*Comando para aceitar palavras em português e caracteres especiais*/
	setlocale(LC_ALL, "portuguese");
	
	/*Criação de variaveis*/
	float trab1, trab2, p1, p2, complementar, result; int exit;
	
	printf("Este programa tem a função de calcular média de notas! \n\n");
	
	do{
		/*Campo de inserção de valor para a variável*/
		printf("\n\Insira a nota T1: ");
		scanf("%f",&trab1);
		
		printf("\nInsira a nota T2: ");
		scanf("%f",&trab2);
		
		printf("\nInsira a nota P1: ");
		scanf("%f",&p1);
		
		printf("\nInsira a nota P2: ");
		scanf("%f",&p2);
	
		printf("\n\Insira a nota complementar: ");
		scanf("%f",&complementar);
		 
		printf("Calculo de média: ");
		result = (trab1 * 0.1) + (trab2 * 0.1) + (p1 * 0.15) + (p2 * 0.15) + (complementar * 0.5);
		printf("\n\n(%.2f * 0,1) + (%.2f  * 0,1) + (%.2f * 0,15) + (%.2f  * 0,15) + (%.2f  * 0,5) = %.2f", trab1, trab2, p1, p2, complementar, result);
		
		printf("\n\nDeseja calcular a média de notas novamente? \n[1]Sim [2]Não:");
		scanf("%i", &exit);	
	}
	while(exit==1);
		
		return 0;
	}
	
/*
Nathan Pires do Prado / RM: 25236164
Gustavo Martin Lennert / RM: 30527686 
*/

