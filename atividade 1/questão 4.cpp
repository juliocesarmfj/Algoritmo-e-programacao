#include <stdio.h>
int main (){
	int valora, valorb, restodadivisao, valordadivisao;
	
	printf("digite o valor a: ");
	scanf ("%i", &valora);
	
	printf("digite o valor b: ");
	scanf ("%i", &valorb);
	
	restodadivisao = valora % valorb;
	valordadivisao = valora / valorb;
	
	printf ("resto da divisao: %i\n", restodadivisao);
	printf ("valor da divisao: %i", valordadivisao);
	
	
}
