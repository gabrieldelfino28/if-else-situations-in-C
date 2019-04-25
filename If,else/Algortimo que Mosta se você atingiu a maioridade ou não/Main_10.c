#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int an,idade,at;
 	
 	printf("\nDigite o seu ano de nascimento: ");
 	scanf("%d", &an);
 	printf("\nDigite o ano atual: ");
 	scanf("%d", &at);
 	
 	idade = at - an;
 	
 	if (idade<18)
	 {
	 	printf("\nVoce nao atingiu a maioridade, sua idade: %d\n\n ", idade);
	 }
	 
	 else {
	 	printf("\nVoce atingiu a maioridade, sua idade: %d\n\n ", idade);
	 }
 	
 	system ("PAUSE");
 	
	return 0;
}
