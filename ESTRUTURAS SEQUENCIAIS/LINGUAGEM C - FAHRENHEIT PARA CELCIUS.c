#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS	
	float f ;
	
	//COLOCANDO O IDIOMA EM PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO A TEMPERATURA EM FAHRENHEIT
	printf("Digite A Temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	//EXIBE A CONVERSAO DE FAHRENHEIT PARA CELCIUS
	printf("\nA Convers�o de Fahrenheit para Celcius �: %2.f", (f-32)/1.8);
	
	
	return 0;
}