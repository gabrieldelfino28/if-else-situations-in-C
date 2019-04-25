#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int senha;
 	
 	printf("\nVerificacao por senha");
 	printf("Digite a senha: ");
 	scanf("%d", &senha);
 	
 	if (senha==12345) 
	 {
	 	printf("\nSenha valida\n\n");
	 }
	 
	 else {
	 	printf("\nSenha incorreta\n\n");
	 }
 	
 	system("PAUSE");
 	
	return 0;
}
