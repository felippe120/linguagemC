#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Estudo das vari�veis
	@author Jos� de Assis 
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	// Tipos de vari�veis
	char professor[30] = {"Hendrik Vincius"}; //[30] -> m�ximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	system("color 0a");
	printf(" .d8b.   .o88b.  .d8b.  d8888b. d88888b .88b  d88. d888888b  .d8b.  \n");
	printf("d8' `8b d8P  Y8 d8' `8b 88  `8D 88'     88'YbdP`88   `88'   d8' `8b \n");
	printf("88ooo88 8P      88ooo88 88   88 88ooooo 88  88  88    88    88ooo88 \n");
	printf("88~~~88 8b      88~~~88 88   88 88~~~~~ 88  88  88    88    88~~~88 \n");
	printf("88   88 Y8b  d8 88   88 88  .8D 88.     88  88  88   .88.   88   88 \n");
	printf("YP   YP  `Y88P' YP   YP Y8888D' Y88888P YP  YP  YP Y888888P YP   YP \n");
                                                                    
    printf("\n");                                                         
	printf("db   dD d888888b d8b   db  d888b  .d8888. \n");
	printf("88 ,8P'   `88'   888o  88 88' Y8b 88'  YP \n");
	printf("88,8P      88    88V8o 88 88      `8bo.   \n");
	printf("88`8b      88    88 V8o88 88  ooo   `Y8b. \n");
	printf("88 `88.   .88.   88  V888 88. ~8~ db   8D \n");
	printf("YP   YD Y888888P VP   V8P  Y888P  `8888Y' \n");
	printf("\n");
	system("pause");
	system("cls");
	printf("_____________________________\n");
	// %s -> Ler o tipo de vari�vel
	// , (v�rgula) concatenar(unir) um texto com o conte�do da vari�vel
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Per�odo: %d\n", periodo);
	// .1 antes de %f arredonda para 1 casa decimal
	printf("Carga hor�ria semanal: %.1f\n", cargaHoraria);
	printf("Sal�rio: R$ %.2lf\n", salario);
	printf("_____________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float imc,peso,altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	// o comando gets � usado especificamente para capturar String (char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf � usado para capturar as demais vari�veis
	// o s�mbolo &(amper) � usado para referenciar a mem�ria
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATEN��O! Para capturar um n�mero n�o inteiro usar (,) v�rgula
	scanf("%f", &peso);
	printf("Altura(m): ");
	scanf("%f", &altura);
	imc = peso / (altura * altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	printf("______________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("IMC: %.2f\n",imc);
	printf("______________________________\n");
	system("pause");
	return 0;
}
