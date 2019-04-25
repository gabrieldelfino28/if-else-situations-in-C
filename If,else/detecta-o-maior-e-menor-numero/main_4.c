#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float num1,num2;
	
	printf("\nDigite o valor do 1o numero: ");
	scanf("%f", &num1);
	printf("\nDigite o valor do 2o numero: ");
	scanf("%f", &num2);
	
	if (num1>num2)
	{
		printf("\n Este e o maior valor: %.2f\n ", num1);
		printf("\n Este e o menor valor: %.2f\n\n ", num2);
	}
	
		else {
		printf("\n Este e o maior valor %.2f\n ", num2);
		printf("\n Este e o menor valor %.2f\n\n ", num1);
	}
	

	
	system("PAUSE");
	
	return 0;
}
