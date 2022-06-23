
//Incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


//Cria��o do corpo do c�digo
int main(){
	
	//Comando para inclus�o de acentos e palavras da l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	
	//Apresenta��o do c�digo
	printf("\n                           --- Ol�! Este programa faz simula��o de um MENU institucional ---");

	//Cria��o da v�riavel que armazena a quantidade de alunos a ser cadastrados
	int qtd_aluno=0;
	
	//Cria��o do campo de inser��o da quantidade de alunos, para ser armazenado na v�riavel "qtd_aluno"
	printf("\n\n * Por favor, insira a quantidade de alunos a ser cadastrado: ");
	scanf("%d", &qtd_aluno);
	
	//Cria��o de v�riaveis de n�mero inteiros e reais(flutuantes)
	int opcao=0, repeat=0;
	float soma=0, total=0;
	
	//Cria��o de vetores de caracteres e de n�meros reais 
	char alunos[qtd_aluno][15], consult[15]; 
	float media[qtd_aluno], trab1[qtd_aluno], trab2[qtd_aluno], p1[qtd_aluno], p2[qtd_aluno], complementar[qtd_aluno];
	
	//Cria��o do la�o de repeti��o "do/while", com a fun��o de executar o menu quantas vezes for necess�rio para o usu�rio
	do{
		
		//Cria��o do menu de op��es
		printf("\n\n                           =========================== MENU ===========================                           ");
		printf("\n\n [1]Cadastrar alunos \n\n [2]Lan�ar notas \n\n [3]Consultar boletim de aluno espec�fico \n\n [4]Consultar boletim de todos os alunos \n\n [5]Calcular m�dia geral da turma \n\n [6]Sair \n\n * Insira a op��o: ");
		
		//Recep��o do valor digitado e armazenado na v�riavel "opcao"
		scanf("%i", &opcao);
		
		
		//Cria��o da estrutura condicional "switch/case", que tem a fun��o receber como par�metro a v�riavel "opcao", e direcionar o usu�rio a respectiva op��o selecionada no menu
		switch(opcao){
			
			//Op��o de inser��o dos nomes dos alunos
			case 1:{
				
				//La�o de repeti��o "for", para executar a contagem de alunos e fornecer a op��o de inser��o dos nomes conforme a quantidade de alunos(qtd_aluno)
				for(int i=0; i<qtd_aluno; i++){
					
				//Campo de inser��o do nome dos alunos, para armazenar no vetor "alunos"	
				printf("\n - Insira o nome do %i� aluno: ", i+1);
				scanf("%s", &alunos[i]);
				}
				
				printf("\n--------------------\n");
				
				
				//La�o de repeti��o "for", para executar a contagem de alunos j� cadastrados, e apresent�-los
				for( int i = 0 ; i < qtd_aluno; i++){
				    printf("\n Aluno [%d] = %s\n",i+1, alunos[i]);
				    printf("\n--------------------\n");
				}
				
			//Comando para intera��o com o usu�rio, pedindo que o mesmo clique em qualquer tecla para prosseguir	
			system("pause");
			
			//Comando com a fun��o de "limpar" o que j� foi executado, e prosseguir 
			system("cls");
			
			//Comando para quebrar a execu��o do Caso 1	
			break;
			}			
				
			
			//Op��o de inser��o das notas dos alunos
			case 2:{
				
				
				//Cria��o de op��o para selecionar se a inser��o ser� apenas para um aluno espec�fico [1], ou para todos [2], e armazenar na v�riavel "opcao"
				printf("\n\n * Digite [1] para lan�ar notas de um aluno espec�fico, e [2] para todos: ");
				scanf("%d", &opcao);
				
					//Estrutura condiconal "if" simples e enacadeada, que tem como fun��o ler o valor da v�riavel "opcao", e executar a inser��o de notas conforme a op��o selecionada anteriormente
					if(opcao == 1){
						
						//Inser��o do nome do aluno que o usuario ir� cadastrar as notas, e amarzenar na v�riavel "consult"
						printf("\n - Insira o aluno que gostaria de inserir as notas: ");
						scanf("%s", &consult);
						
						
						//La�o de repeti��o "for", para executar a contagem de alunos j� cadastrados, para poder procurar o aluno digitado em cada posi��o do vetor
						for(int i=0; i<qtd_aluno; i++){
							
							//Estrutura condicional "if", com a fun��o de comparar o nome inserido em "consult" com cada posi��o do vetor "alunos", caso o encontre ir� retornar 0, executar� a fun��o
							if(strcmp(consult, alunos[i])==0){
								
								
								//Campos de inser��o das notas e armazenamento nas respectivas v�riaveis
								printf("\n\n --- INSER��O DE NOTAS ---\n");
								
						    	printf("\n  Aluno [%d] = %s\n",i+1, alunos[i]);	
						    	
								printf("\n - Insira a nota T1: ");
								scanf("%f",&trab1[i]);
								
								printf("\n-------------------------");
								
								printf("\n - Insira a nota T2: ");
								scanf("%f",&trab2[i]);
								
								printf("\n-------------------------");
								
								printf("\n - Insira a nota P1: ");
								scanf("%f",&p1[i]);
								
								printf("\n-------------------------");
								
								printf("\n - Insira a nota P2: ");
								scanf("%f",&p2[i]);
								
								printf("\n-------------------------");
							
								printf("\n - Insira a nota complementar: ");
								scanf("%f",&complementar[i]);
								
								printf("\n---------------------------------\n\n");					
							}
							system("pause");
							system("cls");
							break;
						}
						
					}
					
					//Inser��o de notas geral dos alunos
					if(opcao == 2){
						
						printf("\n\n --- INSER��O DE NOTAS GERAL ---\n");
						
						//La�o de repeti��o "for", para executar a contagem de alunos j� cadastrados, e inserir a notas de todos 
						for(int i=0; i<qtd_aluno; i++){
							
							//Campos de inser��o das notas e armazenamento nas respectivas v�riaveis
					    	printf("\n  Aluno [%d] = %s\n",i+1, alunos[i]);	
					    	
							printf("\n - Insira a nota T1: ");
							scanf("%f",&trab1[i]);
							
							printf("\n-------------------------");
							
							printf("\n - Insira a nota T2: ");
							scanf("%f",&trab2[i]);
							
							printf("\n-------------------------");
							
							printf("\n - Insira a nota P1: ");
							scanf("%f",&p1[i]);
							
							printf("\n-------------------------");
							
							printf("\n - Insira a nota P2: ");
							scanf("%f",&p2[i]);
						
							printf("\n-------------------------");
						
							printf("\n - Insira a nota Complementar: ");
							scanf("%f",&complementar[i]);
							
							printf("\n---------------------------------\n\n");
													
						}
						system("pause");
						system("cls");
						break;		
					}
					
					//Alerta caso o usu�rio insira um valor diferente de [1] ou [2], na v�riavel "opcao"
					if(opcao != 1 && opcao != 2){
						printf("\n\n * N�mero inserido inv�lido!!");
						system("pause");
						system("cls");
					}
					break;
				}
			
			//Op��o com a fun��o de cosultar o boletim de um aluno espec�fico 			
			case 3:{
				
				printf("\n---------------------------------\n");
				
				//Inser��o do nome do aluno para armazenar na v�riavel "consult"
				printf("\n\n * Insira o aluno que gostaria de consultar: ");
				scanf("%s", &consult);
				
				
				//La�o de repeti��o "for", para executar a contagem de alunos j� cadastrados, para poder procurar o aluno digitado em cada posi��o do vetor
				for(int i=0; i<qtd_aluno; i++){
					
					//Estrutura condicional "if", com a fun��o de comparar o nome inserido em "consult" com cada posi��o do vetor "alunos", caso o encontre ir� retornar 0, executar� a fun��o
					if(strcmp(consult, alunos[i])==0){
					
					//Apresenta��o das notas do aluno selecionado
					printf("\n Notas %s: \n", alunos[i]);
					printf("\n - Trabalho 1: %.2f \n\n - Trabalho 2: %.2f \n\n - Prova 1: %.2f \n\n - Prova 2: %.2f \n\n - Complementar: %.2f\n\n", trab1[i], trab2[i], p1[i], p2[i], complementar[i]);
					}
				}
				printf("\n---------------------------------\n\n");
				
				system("pause");
				system("cls");
				break;			
			}
			
	
			//Op��o de consulta das notas de todos os alunos
			case 4:{
				
				//La�o de repeti��o "for", para executar a contagem de alunos j� cadastrados, apresentar as notas de todos
				for(int i=0; i<qtd_aluno; i++){
					
					printf("\n Notas %s: \n", alunos[i]);
					printf("\n - T1: %.2f \n\n - T2: %.2f \n\n - P1: %.2f \n\n - P2: %.2f \n\n - Complement: %.2f", trab1[i], trab2[i], p1[i], p2[i], complementar[i]);
					
					printf("\n---------------------------------\n\n");
				}
				system("pause");
				system("cls");
				break;	
			}
			
			
			//Op��o para executar o calculo de m�dia geral e individual de cada aluno			
			case 5: {
				
				//Cria��o do la�o de repeti��o "for", para ler todos os valor de todos os vetores de notas, para calcular a m�dia geral e armazenar na v�riavel "total"
				for(int i=0; i<qtd_aluno; i++){
					
					media[i] = (trab1[i] + trab2[i] + p1[i] + p2[i] + complementar[i]) / 5;
					
					soma += media[i];
					
					total = (soma / qtd_aluno);
				}   
				
				//Apresenta��o da m�dia de cada aluno
				printf("\n\n --- M�DIA DOS ALUNOS ---\n");
				
				//La�o de repeti��o "for", para executar a contagem de alunos j� cadastrados, e apresentar a nota de cada aluno armazenado nas respectivas posi��es do vetor "media"
				for(int i=0; i<qtd_aluno; i++){
	
					printf("\n - %s: %.2f\n", alunos[i], media[i]);
				}
				
				
				printf("\n---------------------------------\n");
								
				//Apresenta��o da m�dia geral, atrav�s da v�riavel "total"				
				printf("\n --- M�DIA GERAL ---\n");
				
				printf("\n - %.2f\n", total);
				
				printf("\n---------------------------------\n\n");
				
				system("pause");
				system("cls");
				break;	
			}
					
			
			//Op��o de quebra de execu��o do c�digo
			case 6:{
				printf("\n\n --- Fim da execu��o! ---");
				break;
			}
			
			
			//Op��o executada caso o usu�rio selecione um valor que n�o corresponda as op��es do menu		
			default:{
				printf("\n * N�mero selecionado inv�lido!\n\n");
				
				system("pause");
				system("cls");
				break;
			}
		}
	}

	//Comando do la�o de repeti��o "while", referente ao comando criado "do", para que o c�digo seja executado enquanto o valor digitado na v�riavel "opcao", seja diferente ou igual a 6 
	while(opcao != 6);

	return 0;
}
