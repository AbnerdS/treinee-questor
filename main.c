#include <stdio.h>
#include <stdlib.h>

void inicio(){
	int Classe, Forca, Destreza, Inteligencia, Vitalidade;
	char nome[20];
	char genero[20];
	printf("Ola! Seje Bem vindo ao MUD! \nSelecione a classe do seu personagem\n");
	printf(" 1 -  Guerreiro, 2 - Mago, 3 - Arqueiro\n");
	scanf("%d",&Classe);
	
	switch (Classe) {
		case 1:
			printf("Escolhido Guerreiro, atributos: \n\n");
			Forca = 6;
			Destreza = 14;
			Inteligencia = 10;
			Vitalidade = 6;
			printf("Força %d, Destreza %d, Inteligencia %d, Vitalidade %d:\n\n", 
			Forca, Destreza, Inteligencia, Vitalidade);
			break;
		case 2:
			printf("Escolhido Mago, atributos: \n");
			Forca = 6;
			Destreza = 14;
			Inteligencia = 10;
			Vitalidade = 6;
			printf("Forca %d, Destreza %d, Inteligencia %d, Vitalidade %d:\n\n",
			Forca, Destreza, Inteligencia, Vitalidade);
			break;	
		case 3:
			printf("Escolhido Arqueiro, atributos: \n");
			Forca = 6;
			Destreza = 14;
			Inteligencia = 10;
			Vitalidade = 6;
			printf("Força %d, Destreza %d, Inteligencia %d, Vitalidade %d:\n\n",
			Forca, Destreza, Inteligencia, Vitalidade);
			break;
		default:
			printf("Classe invalida: \n");		
}
	printf("Escolha o nome e o genero do seu personagem\n\n");
	scanf("%s %s", nome, genero);
	printf("Seje bem vindo %s genero %s , sua jornada se inicia agora. SUCESSO!", nome, genero);
	
}


int main() {
	
	inicio();
	
	return 0;
}
