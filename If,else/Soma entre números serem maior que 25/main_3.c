#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float n1,n2,soma;
 	
 	printf("\nDigite o valor do 1o numero: ");
 	scanf("%f", &n1);
 	printf("\nDigite o valor do 2o numero: ");
 	scanf("%f", &n2);
 	
 	soma = n1+n2;
 	
 	if (soma>25)
 	{
 		printf("\n A soma dos valores e maior que 25: %.2f\n\n ", soma);
	 }
	 
	 else {
	 	printf("\n A soma dos valores e menor que 25: %.2f\n\n ", soma);
	 }
	 
	 system("PAUSE");
 	
	return 0;
}
