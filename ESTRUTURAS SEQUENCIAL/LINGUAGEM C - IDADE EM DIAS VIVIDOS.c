#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEIFINI��O DE VARIAVEIS
	int i ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO A IDADE DO USUARIO
	printf("Digite Sua Idade: ");
	scanf("%i", &i);
	
	//CALCULANDO QUANTOS DIAS O USUARIO JA VIVEU
	i = i * 365 ;
	
	//EXIBINDO QUANTOS DIAS O USUARIO JA VIVEU
	printf("Voc� viveu aproximadamente: %i Dias", i);
	
	return(0);
}