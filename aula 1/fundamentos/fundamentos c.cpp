#include <iostream>
#include <stdlib.h>
#include <locale.h>

/*
	Fundamentos da linguagem C
	@author Felippe de Paula
*/

int main(int argc, char** argv) {
	//a linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL, "Portugueses");
	system("color D");
	printf("Felippe de Paula\n");
	system("pause");
	//a linha abaixo "limpa" tela do prompt de comando	
	printf("C�digo de cores:\n\n");
	system("cls");
	system("color 20");
	printf("0 - pretp\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde �gua\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde �gua\n");
	printf("C - vermelho claro\n");
	printf("D - lil�s\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	system("pause");
	return 0;
}


