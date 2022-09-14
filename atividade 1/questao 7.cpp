#include <stdio.h>
int main (){
	char nome[30],m;
	float salario, horam;
	int matricula,horast, sexo;
   
	
	printf("Informe seu nome: ");
	scanf ("%s", &nome);
	
	printf("Informe a sua matricula: ");
	scanf ("%i", &matricula);
	
	printf("Digite 1 para masculino\nDigite 2 para feminino\ninforme seu sexo: ");
	scanf("%i", &sexo);
	
	printf ("Informe horas de trabalho no dia: ");
	scanf ("%i", &horast);
	
	printf ("Informe o valor recebido por hora: ");
	scanf ("%f", &horam);
	
	salario= (horast*30)*horam;
	
	printf("\n");
	printf("   _____ _    _  _____ ______  _____ _____  ____\n");
	printf("  / ____| |  | |/ ____|  ____|/ ____/ ____|/ __ \\\n");
	printf(" | (___ | |  | | |    | |__  | (___| (___ | |  | |\n");
	printf("  \\___ \\| |  | | |    |  __|  \\___ \\\\___ \\| |  | |\n");
	printf("  ____) | |__| | |____| |____ ____) |___) | |__| |\n");
	printf(" |_____/ \\____/ \\_____|______|_____/_____/ \\____/\n ");
	printf("---------------------------------------------------------\n");
    printf("\n");
    
    
	printf("Nome de usuario:%s\nMatricula:%i\n", nome, matricula);
	
	switch (sexo){
		
		case 1:
			printf("Sexo:Masculino");
		break;
		case 2:
			printf("Sexo:Feminino");
			
		break;
	}
	
    printf("\nHoras trabalhadas no dia:%i\nValor recebido por hora:%.2f\nSalario mensal:%.2f",horast,horam,salario);






}
