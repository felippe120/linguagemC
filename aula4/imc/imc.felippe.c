#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo do IMC
	@author Aluno Felippe de Paula
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 1F"); 
	printf("d888888b .88b  d88.  .o88b. \n");
	printf("  `88'   88'YbdP`88 d8P  Y8 \n");
	printf("   88    88  88  88 8P      \n");
	printf("   88    88  88  88 8b      \n");
	printf("  .88.   88  88  88 Y8b  d8 \n");
	printf("Y888888P YP  YP  YP  `Y88P' \n");
	printf("\n");
	//variáveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n",imc);
	//tabela status de acordo com a tabela imc
		if(imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc <18){
		printf("Abaixo do peso\n");	
	}	
		else if(imc < 18){
		printf("Peso normal\n");
	}   else if(imc <24){
		printf("Peso normal\n");
	}
		else if(imc < 25){
		printf("Acima do peso\n");
	}else if(imc <29){
		printf("Acima do peso\n");
	}
		else if(imc < 30){
		printf("Obesidade 1\n");
	}else if(imc < 34){
		printf("Obesidade 1\n");
	}
		else if(imc <35){
		printf("Obesidade 2\n");
	}else if(imc < 39){
		printf("Obesidade 2\n");
 	}else {
 		printf("Obesidade 3 (mórbida)\n");
	}
    
	system ("pause");
	return 0;
}
