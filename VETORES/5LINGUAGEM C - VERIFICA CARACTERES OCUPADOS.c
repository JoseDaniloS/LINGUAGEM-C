#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS E VETOR
	int cont = 0;
	char nome[50];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO SEU NOME
	printf("Digite seu nome: ");
	gets(nome);
	
	//ENQUANTO O VETOR N�O CHEGAR NA STRING ('\0') O LOOPING FICA RODANDO
	while(nome[cont] != '\0'){
		cont++;
	}
	
	//INCLUS�O DO '\0'
	cont++;
	
	//EXIBINDO QUANTOS CARACTERES FORAM OCUPADOS NO VETOR
	printf("%i", cont);
	
	return 0;
}