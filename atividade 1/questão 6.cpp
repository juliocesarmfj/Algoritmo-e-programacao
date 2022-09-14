#include <stdio.h>
int main (){
	float notaA, notaB, media, aprovado, reprovado;
	
	printf ("peso nota A: 3.5\n");
    printf ("peso nota B: 7.5\n");
	
	printf("digita a nota A: ");
	scanf ("%f", &notaA);
	
	printf("digita a nota B: ");
	scanf ("%f", &notaB);
	
	media= (3.5*notaA+7.5*notaB)/11;
	
	if (media>5.5){
		printf(" _ __   __ _ ___ ___  ___  _   _ \n");
		printf("| '_ \\ / _` / __/ __|/ _ \\| | | |\n");
		printf("| |_) | (_| \\__ \\__ \\ (_) | |_| |\n");
		printf("| .__/ \\__,_|___/___/\\___/ \\__,_|\n");
		printf("|_| \n");
		
	}
	else
	if (media<5.5){
		printf(" _ __ ___ _ __  _ __ _____   _____  _   _ \n");
		printf("| '__/ _ \\ '_ \\| '__/ _ \\ \\ / / _ \\| | | |\n");
		printf("| | |  __/ |_) | | | (_) \\ V / (_) | |_| |\n");
		printf("|_|  \\___| .__/|_|  \\___/ \\_/ \\___/ \\__,_|\n");
		printf("         |_|                              \n");
	}
 
	printf("media:%2.f", media);
	
	
	
	
	
}
