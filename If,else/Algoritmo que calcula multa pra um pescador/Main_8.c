#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float multa,peixe;
	
	printf("\nCalculo de multa paga por um pescador");
	printf("\nInforme a quantidade de quilos: ");
	scanf("%f", &peixe);
	
	if (peixe>50)
{
	multa = (peixe - 50) * 4;
	printf("\n O valor da multa a ser paga e: R$%.2f \n\n", multa);
	
	}	
	
	else {
		printf ("\nO Pescador esta livre pra assar o seus peixes\n\n");
	}
	return 0;
}
