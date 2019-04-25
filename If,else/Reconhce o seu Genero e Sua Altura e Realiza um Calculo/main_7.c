#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {

 	
 	float alt;
 	int sexo;
 	
 	printf("\nDigite o seu genêro (1 para masculino e 2 para feminino): ");
 	scanf("%d", &sexo);
 	printf("\nDigite o valor de sua altura: ");
 	scanf("%f", &alt);
 	
 	if (sexo==1) {
 		
 		sexo = (72.7*alt)-58;
 		
 		printf("\nPeso ideal do homem: %d\n\n ", sexo);
}
	else {
		
		sexo= (62.1*alt)-44.7;
		
		printf("\nPeso ideal da mulher: %d\n\n ", sexo);

	}
 	
 	system("PAUSE");
 	
	return 0;
}
