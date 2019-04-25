#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num);
	
	
	if (num%2==0)//operador %
	 {
		printf("\n O numero e par: %d\n\n ", num);
	}
	
	else {
		printf("\n O numero e impar: %d\n\n ", num);
	}
	
	system("PAUSE");
		
	return 0;
}
