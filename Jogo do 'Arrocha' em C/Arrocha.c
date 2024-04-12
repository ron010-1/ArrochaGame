#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(){
	// Alterando local para Português-Brasil
	  setlocale(LC_ALL, "Portuguese");
	  
	//CPU está escolhendo um número aleatório.
	srand(time(NULL));
	int resposta = (rand() % 100) + 1;
	
	//Apresenta��o do jogo ao usu�rio.
	printf("Ol�! Esse � um jogo desenvolvido por Riquelme Oliveira, baseado na Linguagem C.\n");
	printf("Os fins desse jogo � de apenas para boas pr�ticas e estudo de algoritmos em C.\n");
	printf("Instru��es:\n");
	printf("- A cpu ir� escolher um n�mero aleat�rio no intervalo de 1 a 100.\n");
	printf("- Voc� deve arrochar o n�mero at� que fique entre o intervalo de 2 n�meros seja igual a 2, ou seja, a subtra��o entre o maior e o menor dever ser 2.\n");
	//Inicializando vari�veis.
	int numeroMinimo = 1;
	int numeroMaximo = 100;
	int palpite = 0;
	
	printf("\n");
	//Sistema de Pontua��o, cada vez que rodar o "while" ser� retirado 10 pontos do TOTAL.
	int pontuacao = 100;
	do{
		pontuacao -= 10;
		printf("Escolha um numero inteiro entre %d - %d:", numeroMinimo, numeroMaximo);
		scanf("%d", &palpite);
		if(palpite > resposta){
			numeroMaximo = palpite;
		}
		else if(palpite < resposta){
			numeroMinimo = palpite;
		}
	}
	while(palpite != resposta && numeroMaximo - numeroMinimo > 10);
	
	if(palpite = resposta){
		pontuacao = 0; 
		printf("VOC� PERDEU. Sua pontuacao: %d pontos.", pontuacao);
	}
	else if(numeroMaximo - numeroMinimo <= 10){
		printf("Parab�ns! Voc� ganhou. Sua pontuacao: %d pontos", pontuacao);
	}
	
	return 0;
}
