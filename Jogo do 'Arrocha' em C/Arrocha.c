#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

void main(){
	// Alterando local para Português-Brasil
	  setlocale(LC_ALL, "Portuguese");
	  
	//CPU está escolhendo um número aleatório.
	srand(time(NULL));
	int resposta = (rand() % 100) + 1;
	
	//Apresentação do jogo ao usuário.
	printf("Olá! Esse é um jogo desenvolvido por Riquelme Oliveira, baseado na Linguagem C.\n");
	printf("Os fins desse jogo é de apenas para boas práticas e estudo de algoritmos em C.\n");
	printf("Instruções:\n");
	printf("- A cpu irá escolher um número aleatório no intervalo de 1 a 100.\n");
	printf("- Você deve arrochar o número até que fique entre o intervalo de 2 números seja igual a 2, ou seja, a subtração entre o maior e o menor dever ser 2.\n");
	//Inicializando variáveis.
	int numeroMinimo = 1;
	int numeroMaximo = 100;
	int palpite = 0;
	
	printf("\n");
	//Sistema de Pontuação, cada vez que rodar o "while" será retirado 10 pontos do TOTAL.
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
		printf("VOCÊ PERDEU. Sua pontuacao: %d pontos.", pontuacao);
	}
	else if(numeroMaximo - numeroMinimo <= 10){
		printf("Parabéns! Você ganhou. Sua pontuacao: %d pontos", pontuacao);
	}
	
}
