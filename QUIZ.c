#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //usar cls
#include <locale.h> //deixar em portugues

	int main(){
	//variaveis utilizadas
	char nome[100], opcao[9][50]; // opcoes serao usadas aq
	int i, pontuacao = 0;
	setlocale(LC_ALL, "Portuguese"); //determinar alfabeto
	
	//printar nome
	 	for(i=1; i<=53; i++){ 
	 	 printf(" ");
		}
		 printf("bem vindo ao QUIZ\n ");
	printf("digite seu nome: ");
	scanf(" %[^\n]", &nome);
	
	pontoinicial: // voltar para o menu vem pra ca
	//limpar tela
	system ("cls || clear");
	
	for(i=1; i<=55; i++){ //centralizar a mensagem 
	 	 printf(" ");
	}
 	printf("QUIZ MENU"); // opcoes basicas do primeiro menu
 	printf("\n\n    JOGAR \n\n    OPÇOES \n \n    PONTUAÇÃO \n\n    SAIR ");
 	printf("\n\n\n            digite sua opção: ");
 	scanf(" %s", &opcao[0]);
 	while(1){
 		
 	if (strcmp(opcao[0], "jogar") ==0){ //começo das perguntas do quiz
		 pontuacao = 0;
		 system("cls || clear");
		 Sleep(1000);
		 system("cls");
		 pontoescrita:
		for(i=1; i<=53; i++){
	 	 printf(" ");
		}
		printf("     tema: mundo animal ");
		system("cls");
		printf("\n       pontuação de questões: %d", pontuacao); // 1 questao
		printf("\n \n Qual é o maior mamífero do planeta? \n" );
		printf(" \n \n A)     Elefante-africano ");
		printf(" \n \n B)     Baleia-azul "  );
		printf(" \n \n C)     Tubarão-baleia \n ");
		printf("\n (A,B,C) \n  digite sua resposta : ");
		scanf(" %s", &opcao[3]);
			if(strcmp(opcao[3], "A") ==0){
				system("cls");
				printf("resposta incorreta... ");
				Sleep(500);
				system("cls");
			}
			else if(strcmp(opcao[3], "B") ==0){
				pontuacao++;
				system("cls");
				printf("resposta correta... ");
				Sleep(500);
				system("cls");
			}
			else if(strcmp(opcao[3], "C") ==0){
				system("cls");
				printf("resposta incorreta... ");
				Sleep(500);
				system("cls");
			}
			else{
				system("cls");
				printf("RESPOSTA INVALIDA...");
				Sleep(500);
				system("cls");
				goto pontoescrita;
			}
			pontoescrita2:
			printf("\n \n       pontuação de questões: %d ", pontuacao); // 2 questao
			printf("\n \n Qual desses animais é conhecido por dormir de cabeça para baixo? ");
			printf(" \n \n A) Morcego ");
			printf(" \n \n B) Preguiça "  );
			printf(" \n \n C) Coala \n ");
			printf("\n (A,B,C) \n  digite sua resposta : ");
			scanf(" %s", &opcao[4]);
				if(strcmp(opcao[4], "A") ==0){
				pontuacao++;
				system("cls");
				printf("resposta correta... ");
				Sleep(500);
				system("cls");
			}
			else if(strcmp(opcao[4], "B") ==0){
				system("cls");
				printf("resposta incorreta... ");
				Sleep(500);
				system("cls");
			}
			else if(strcmp(opcao[4], "C") ==0){
				system("cls");
				printf("resposta incorreta... ");
				Sleep(500);
				system("cls");
			}
			else{
				system("cls");
				printf("RESPOSTA INVALIDA...");
				Sleep(500);
				system("cls");
				goto pontoescrita2;
			}
			pontoescrita3:
			printf("\n \n        pontuação de questões: %d ", pontuacao);
			printf("\n \n Quantos tentáculos tem um polvo?"); // 3 questao
			printf(" \n \n A) 6 ");
			printf(" \n \n B) 8 "  );
			printf(" \n \n C) 10 \n ");
			printf("\n (A,B,C) \n  digite sua resposta : ");
			scanf(" %s", &opcao[5]);
			if(strcmp(opcao[5], "A") ==0){
				system("cls");
				printf("resposta incorreta... ");
				Sleep(500);
				system("cls");
			}
			else if(strcmp(opcao[5], "B") ==0){
				pontuacao++;
				system("cls");
				printf("resposta correta...  ");
				Sleep(500);
				system("cls");
			}
			else if(strcmp(opcao[5], "C") ==0){
				system("cls");
				printf("resposta incorreta... ");
				Sleep(500);
				system("cls");
	  	  	}
			else{
				system("cls");
				printf("RESPOSTA INVALIDA...");
				Sleep(500);
				system("cls");
				goto pontoescrita3;	
			}
	 	for(i=1; i<=53; i++){ 
	 	 printf(" ");
		}
		printf("QUIZ CONCLUIDO");
		printf("\n \n OBRIGADO POR JOGAR");
		Sleep(1000);
		system("cls");
		goto pontoinicial;	
		 break;
	}
 	
	else if (strcmp(opcao[0], "opcoes") ==0){ //menu de opcoes a partir daqui
		 pontoopcao:
		 system("cls || clear");
		 printf("bem vindo as opções");
		 printf("\n \n voltar: ");
		 printf("\n \n tema claro: ");
		 printf("\n \n tema escuro: ");
		 printf("\n \n escolha sua opcao: ");
		 scanf(" %s", &opcao[1]);
		 if	(strcmp(opcao[1], "voltar") ==0){
			 goto pontoinicial;
		 }
		 else if (strcmp(opcao[1], "claro") ==0){
			 system("color 87");
			 goto pontoopcao;
		 }
		 else if (strcmp(opcao[1], "escuro") ==0){
			 system("color 07");
			 goto pontoopcao;
		 }
		 else {
			 system("cls || clear");
		 	 printf("valor invalido retornando ao menu de opçoes...");
		 	 Sleep(1000);
		 	 system("cls || clear");
		 	 goto pontoopcao;
		 	 break;
		 }
		 
		 break;
	 }
	else if(strcmp(opcao[0], "sair") ==0){ //sair do programa por aqui
		 system("cls || clear");
		 printf("saindo...");
		 Sleep(10);
		 system("exit");
		 break;
	 }
	else if(strcmp(opcao[0], "pontuacao") ==0){ //menu de pontos a partir daqui
		pontopontos:
		system("cls");
		printf("\n     sua pontuação na ultima tentativa: ");
		printf("\n \n seu nome é:  %s", nome);
		printf("\n \n seus pontos foram: %d / 3", pontuacao);
		printf("\n \n digite voltar para retornar ao menu:");
		scanf("\n %s", &opcao[2]);
	 	 if	(strcmp(opcao[2], "voltar") ==0){
		   goto pontoinicial;
		 }else{
		 	 system("cls || clear");
		 	 printf("valor invalido...");
		 	 Sleep(1000);
		 	 system("cls || clear");
		 	 goto pontopontos;
		 	 break;
		 }
	}
 	else { //caso escreva algo errado retorna ao menu
 		 system("cls || clear");
		 printf("valor invalido retornando ao menu inicial...");
		 Sleep(1000);
		 system("cls || clear");
		 goto pontoinicial;
		 break;
	 }
	 }
	 return 0;
}