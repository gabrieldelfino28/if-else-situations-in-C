#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int num1,num2,diferenca;
 	
 	printf("\nDigite o primeiro valor: ");
 	scanf("%d", &num1);
 	printf("\nDigite o segundo valor: ");
 	scanf("%d", &num2);
 	
 	if (num1>num2)
 	{
 		diferenca = num1-num2;
 		
 		printf("\nA diferenca e: %d\n\n ", diferenca);
	 }
	 
	 else 
	 {
	 	diferenca = num2-num1;
	 	
	 	printf("\nA diferenca e: %d\n\n ", diferenca);
	 }
 	
 	system("PAUSE");
 	
	return 0;
}
