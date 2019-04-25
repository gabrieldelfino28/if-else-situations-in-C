#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	setlocale(LC_ALL, "Portuguese");
 	float n1,n2,n3,n4,md;
 	
 	printf("\nCalculo de Nota Anual");
 	printf("\nDigite o valor da 1º nota bimestral: ");
 	scanf("%f", &n1);
 	printf("\nDigite o valor da 2º nota bimestral: ");
 	scanf("%f", &n2);
 	printf("\nDigite o valor da 3º nota bimestral: ");
 	scanf("%f", &n3);
 	printf("\nDigite o valor da 4º nota bimestral: ");
 	scanf("%f", &n4);
 	
 	md = (n1+n2+n3+n4)/4;
 	
 	if (md>=7) {
	 printf("\nO Aluno foi aprovado\n");
	 printf("\n%.2f\n\n ", md);
	 }
	 
	 else {
	 	printf("\n A nota do aluno não foi suficiente\n\n");
	 }
 	
 	system("PAUSE");
 	
	return 0;
}
