#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	float x ;
	
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITA AO USUARIO UM NUMERO
	printf("Digite um N�mero:");
	scanf("%f", &x);
	
	//O ANTECESSOR DO NUMERO
	printf("O Antecessor do Numero Digitado �:  %f \n", (x-1));
	
	//O SUCESSOR DO N�MERO
	printf("O Sucessor do Numero Digitado �:  %f", (x+1));
	
	
	
	
	return(0);
}