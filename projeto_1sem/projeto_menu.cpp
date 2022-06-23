
//Incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


//Criação do corpo do código
int main(){
	
	//Comando para inclusão de acentos e palavras da língua portuguesa
	setlocale(LC_ALL, "portuguese");
	
	
	//Apresentação do código
	printf("\n                           --- Olá! Este programa faz simulação de um MENU institucional ---");

	//Criação da váriavel que armazena a quantidade de alunos a ser cadastrados
	int qtd_aluno=0;
	
	//Criação do campo de inserção da quantidade de alunos, para ser armazenado na váriavel "qtd_aluno"
	printf("\n\n * Por favor, insira a quantidade de alunos a ser cadastrado: ");
	scanf("%d", &qtd_aluno);
	
	//Criação de váriaveis de número inteiros e reais(flutuantes)
	int opcao=0, repeat=0;
	float soma=0, total=0;
	
	//Criação de vetores de caracteres e de números reais 
	char alunos[qtd_aluno][15], consult[15]; 
	float media[qtd_aluno], trab1[qtd_aluno], trab2[qtd_aluno], p1[qtd_aluno], p2[qtd_aluno], complementar[qtd_aluno];
	
	//Criação do laço de repetição "do/while", com a função de executar o menu quantas vezes for necessário para o usuário
	do{
		
		//Criação do menu de opções
		printf("\n\n                           =========================== MENU ===========================                           ");
		printf("\n\n [1]Cadastrar alunos \n\n [2]Lançar notas \n\n [3]Consultar boletim de aluno específico \n\n [4]Consultar boletim de todos os alunos \n\n [5]Calcular média geral da turma \n\n [6]Sair \n\n * Insira a opção: ");
		
		//Recepção do valor digitado e armazenado na váriavel "opcao"
		scanf("%i", &opcao);
		
		
		//Criação da estrutura condicional "switch/case", que tem a função receber como parâmetro a váriavel "opcao", e direcionar o usuário a respectiva opção selecionada no menu
		switch(opcao){
			
			//Opção de inserção dos nomes dos alunos
			case 1:{
				
				//Laço de repetição "for", para executar a contagem de alunos e fornecer a opção de inserção dos nomes conforme a quantidade de alunos(qtd_aluno)
				for(int i=0; i<qtd_aluno; i++){
					
				//Campo de inserção do nome dos alunos, para armazenar no vetor "alunos"	
				printf("\n - Insira o nome do %iº aluno: ", i+1);
				scanf("%s", &alunos[i]);
				}
				
				printf("\n--------------------\n");
				
				
				//Laço de repetição "for", para executar a contagem de alunos já cadastrados, e apresentá-los
				for( int i = 0 ; i < qtd_aluno; i++){
				    printf("\n Aluno [%d] = %s\n",i+1, alunos[i]);
				    printf("\n--------------------\n");
				}
				
			//Comando para interação com o usuário, pedindo que o mesmo clique em qualquer tecla para prosseguir	
			system("pause");
			
			//Comando com a função de "limpar" o que já foi executado, e prosseguir 
			system("cls");
			
			//Comando para quebrar a execução do Caso 1	
			break;
			}			
				
			
			//Opção de inserção das notas dos alunos
			case 2:{
				
				
				//Criação de opção para selecionar se a inserção será apenas para um aluno específico [1], ou para todos [2], e armazenar na váriavel "opcao"
				printf("\n\n * Digite [1] para lançar notas de um aluno específico, e [2] para todos: ");
				scanf("%d", &opcao);
				
					//Estrutura condiconal "if" simples e enacadeada, que tem como função ler o valor da váriavel "opcao", e executar a inserção de notas conforme a opção selecionada anteriormente
					if(opcao == 1){
						
						//Inserção do nome do aluno que o usuario irá cadastrar as notas, e amarzenar na váriavel "consult"
						printf("\n - Insira o aluno que gostaria de inserir as notas: ");
						scanf("%s", &consult);
						
						
						//Laço de repetição "for", para executar a contagem de alunos já cadastrados, para poder procurar o aluno digitado em cada posição do vetor
						for(int i=0; i<qtd_aluno; i++){
							
							//Estrutura condicional "if", com a função de comparar o nome inserido em "consult" com cada posição do vetor "alunos", caso o encontre irá retornar 0, executará a função
							if(strcmp(consult, alunos[i])==0){
								
								
								//Campos de inserção das notas e armazenamento nas respectivas váriaveis
								printf("\n\n --- INSERÇÃO DE NOTAS ---\n");
								
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
					
					//Inserção de notas geral dos alunos
					if(opcao == 2){
						
						printf("\n\n --- INSERÇÃO DE NOTAS GERAL ---\n");
						
						//Laço de repetição "for", para executar a contagem de alunos já cadastrados, e inserir a notas de todos 
						for(int i=0; i<qtd_aluno; i++){
							
							//Campos de inserção das notas e armazenamento nas respectivas váriaveis
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
					
					//Alerta caso o usuário insira um valor diferente de [1] ou [2], na váriavel "opcao"
					if(opcao != 1 && opcao != 2){
						printf("\n\n * Número inserido inválido!!");
						system("pause");
						system("cls");
					}
					break;
				}
			
			//Opção com a função de cosultar o boletim de um aluno específico 			
			case 3:{
				
				printf("\n---------------------------------\n");
				
				//Inserção do nome do aluno para armazenar na váriavel "consult"
				printf("\n\n * Insira o aluno que gostaria de consultar: ");
				scanf("%s", &consult);
				
				
				//Laço de repetição "for", para executar a contagem de alunos já cadastrados, para poder procurar o aluno digitado em cada posição do vetor
				for(int i=0; i<qtd_aluno; i++){
					
					//Estrutura condicional "if", com a função de comparar o nome inserido em "consult" com cada posição do vetor "alunos", caso o encontre irá retornar 0, executará a função
					if(strcmp(consult, alunos[i])==0){
					
					//Apresentação das notas do aluno selecionado
					printf("\n Notas %s: \n", alunos[i]);
					printf("\n - Trabalho 1: %.2f \n\n - Trabalho 2: %.2f \n\n - Prova 1: %.2f \n\n - Prova 2: %.2f \n\n - Complementar: %.2f\n\n", trab1[i], trab2[i], p1[i], p2[i], complementar[i]);
					}
				}
				printf("\n---------------------------------\n\n");
				
				system("pause");
				system("cls");
				break;			
			}
			
	
			//Opção de consulta das notas de todos os alunos
			case 4:{
				
				//Laço de repetição "for", para executar a contagem de alunos já cadastrados, apresentar as notas de todos
				for(int i=0; i<qtd_aluno; i++){
					
					printf("\n Notas %s: \n", alunos[i]);
					printf("\n - T1: %.2f \n\n - T2: %.2f \n\n - P1: %.2f \n\n - P2: %.2f \n\n - Complement: %.2f", trab1[i], trab2[i], p1[i], p2[i], complementar[i]);
					
					printf("\n---------------------------------\n\n");
				}
				system("pause");
				system("cls");
				break;	
			}
			
			
			//Opção para executar o calculo de média geral e individual de cada aluno			
			case 5: {
				
				//Criação do laço de repetição "for", para ler todos os valor de todos os vetores de notas, para calcular a média geral e armazenar na váriavel "total"
				for(int i=0; i<qtd_aluno; i++){
					
					media[i] = (trab1[i] + trab2[i] + p1[i] + p2[i] + complementar[i]) / 5;
					
					soma += media[i];
					
					total = (soma / qtd_aluno);
				}   
				
				//Apresentação da média de cada aluno
				printf("\n\n --- MÉDIA DOS ALUNOS ---\n");
				
				//Laço de repetição "for", para executar a contagem de alunos já cadastrados, e apresentar a nota de cada aluno armazenado nas respectivas posições do vetor "media"
				for(int i=0; i<qtd_aluno; i++){
	
					printf("\n - %s: %.2f\n", alunos[i], media[i]);
				}
				
				
				printf("\n---------------------------------\n");
								
				//Apresentação da média geral, através da váriavel "total"				
				printf("\n --- MÉDIA GERAL ---\n");
				
				printf("\n - %.2f\n", total);
				
				printf("\n---------------------------------\n\n");
				
				system("pause");
				system("cls");
				break;	
			}
					
			
			//Opção de quebra de execução do código
			case 6:{
				printf("\n\n --- Fim da execução! ---");
				break;
			}
			
			
			//Opção executada caso o usuário selecione um valor que não corresponda as opções do menu		
			default:{
				printf("\n * Número selecionado inválido!\n\n");
				
				system("pause");
				system("cls");
				break;
			}
		}
	}

	//Comando do laço de repetição "while", referente ao comando criado "do", para que o código seja executado enquanto o valor digitado na váriavel "opcao", seja diferente ou igual a 6 
	while(opcao != 6);

	return 0;
}
