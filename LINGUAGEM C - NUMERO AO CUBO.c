#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	float n1 ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O NUMERO AO USUARIO
	printf("Digite um N�mero: ");
	scanf("%f", &n1);
	
	//EXIBINDO O CUBO DO NUMERO AO USUARIO
	printf("O Cubo do N�mero Informado �: %.0f", pow(n1,3));
	
	
	
	return 0;
}