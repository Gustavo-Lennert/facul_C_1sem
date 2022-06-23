/*Inser��o de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Cria��o do corpo do c�digo*/
int main(){
	
	/*Comando para inclus�o de acentos e palavras da l�ngua portuguesa*/
	setlocale(LC_ALL, "portuguese");
	
	/*Cria��o de vari�veis*/
	int km, combst, exit; float valorLitro, calc; 
	
	/*Apresenta��o da fun��o do c�digo*/
	printf("\n Este programa calcula o gasto em reais de uma determinada quilometragem, baseada na escolha de combust�vel! \n\n ");
	
	do{
		/*Inser��o da quilometragem, para armazenar na vari�vel km*/
		printf("\n Insira a quilometragem rodada: ");
		
		/*Armazenamento do valor digitado*/
		scanf("%i", &km);
		
		/*Inser��o da op��o de combust�vel, para armazenar na vari�vel combst*/
		printf("\n Selecione qual foi ou ser� o combust�vel a ser usado --- 1 (�lcool) --- 2 (Gasolina): ");
		
		/*Armazenamento do valor digitado*/
		scanf("%i", &combst);
		
		/*Inser��o do valor do combust�vel selecionado, para armazenar na vari�vel valorLitro*/
		printf("\n Agora, insira qual o valor do litro em reais: ");
		
		/*Armazenamento do valor digitado*/
		scanf("%f", &valorLitro);
		
		/*Estrutura de decis�o para calcular o valor gasto, caso a op��o do combust�vel tenha sido �lcool(1)*/
		if(combst==1){
		
		/*Calculo com os valores das respectivas variaveis*/
		calc= km*valorLitro;
		
		/*Apresenta��o do resultado*/
		printf("\n Voc� gastou neste percuso R$%.2f reais", calc);
		}
	
		/*Estrutura de decis�o para calcular o valor gasto, caso a op��o do combust�vel tenha sido Gasolina(2)*/
		if(combst==2){
		
		/*Calculo com os valores das respectivas variaveis*/
		calc= km*valorLitro;
		
		/*Apresenta��o do resultado*/
		printf("\n Voc� gastou neste percuso R$%.2f reais", calc);
		}
		printf("\n\nDeseja executar ese calculo novamente? \n[1]Sim [2]N�o: ");
		scanf("%i", &exit);	
	}
	while(exit==1);
	
	/*Fim da execu��o!*/
	return 0;
}

