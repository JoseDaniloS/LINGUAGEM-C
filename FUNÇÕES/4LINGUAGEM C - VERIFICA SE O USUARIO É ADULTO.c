#include <stdio.h>
#include <locale.h>

//PROT�TIPO DA FUN��O
void verificador(int idade);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO SUA IDADE
	printf("Digite sua idade: ");
	scanf("%i", &x);
	
	//CHAMADA DA FUN��O "verificador"
	verificador(x);
	
	return 0;
}

//FUN��O PARA VERIFICAR SE O �SUARIO � ADULTO OU N�O.
void verificador(int idade){
	if(idade >= 18){
		printf("Voc� � Adulto");	
	}
	else{
		printf("Voc� n�o � Adulto");	
	}
}