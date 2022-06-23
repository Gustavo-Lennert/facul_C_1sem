/*Inserção de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Criação do corpo do código*/
int main(){
	
	/*Comando para inclusão de acentos e palavras da língua portuguesa*/
	setlocale(LC_ALL, "portuguese");
	
	/*Criação de variáveis*/
	int km, combst, exit; float valorLitro, calc; 
	
	/*Apresentação da função do código*/
	printf("\n Este programa calcula o gasto em reais de uma determinada quilometragem, baseada na escolha de combustível! \n\n ");
	
	do{
		/*Inserção da quilometragem, para armazenar na variável km*/
		printf("\n Insira a quilometragem rodada: ");
		
		/*Armazenamento do valor digitado*/
		scanf("%i", &km);
		
		/*Inserção da opção de combustível, para armazenar na variável combst*/
		printf("\n Selecione qual foi ou será o combustível a ser usado --- 1 (Álcool) --- 2 (Gasolina): ");
		
		/*Armazenamento do valor digitado*/
		scanf("%i", &combst);
		
		/*Inserção do valor do combustível selecionado, para armazenar na variável valorLitro*/
		printf("\n Agora, insira qual o valor do litro em reais: ");
		
		/*Armazenamento do valor digitado*/
		scanf("%f", &valorLitro);
		
		/*Estrutura de decisão para calcular o valor gasto, caso a opção do combustível tenha sido Álcool(1)*/
		if(combst==1){
		
		/*Calculo com os valores das respectivas variaveis*/
		calc= km*valorLitro;
		
		/*Apresentação do resultado*/
		printf("\n Você gastou neste percuso R$%.2f reais", calc);
		}
	
		/*Estrutura de decisão para calcular o valor gasto, caso a opção do combustível tenha sido Gasolina(2)*/
		if(combst==2){
		
		/*Calculo com os valores das respectivas variaveis*/
		calc= km*valorLitro;
		
		/*Apresentação do resultado*/
		printf("\n Você gastou neste percuso R$%.2f reais", calc);
		}
		printf("\n\nDeseja executar ese calculo novamente? \n[1]Sim [2]Não: ");
		scanf("%i", &exit);	
	}
	while(exit==1);
	
	/*Fim da execução!*/
	return 0;
}

