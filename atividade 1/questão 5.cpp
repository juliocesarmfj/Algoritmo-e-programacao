#include <stdio.h>
int main (){
	int metros, rolos,metrosavulsos;
	
	printf("digite o valor a: ");
	scanf ("%i", &metros);
	
	rolos=metros / 50;
	metrosavulsos = metros %50;
	
	
	printf ("rolos: %i\n", rolos);
	printf ("metros avulsos: %i", metrosavulsos);
	
	
}
