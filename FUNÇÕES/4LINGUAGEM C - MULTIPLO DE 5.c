#include <stdio.h>
#include <locale.h>

//PROT�TIPO DA FUN��O
void verificador(int valor);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR INTEIRO
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//CHAMADA DA FUN��O "verificador"
	verificador(x);
	
	return 0;
}

//FUN��O PARA VERIFICAR SE O VALOR INSERIDO � OU N�O MULTIPLO DE 5.
void verificador(int valor){
	if(valor % 5 == 0){
		printf("%i � Multiplo de 5",valor);	
	}
	else{
		printf("%i N�o � Multiplo de 5",valor);	
	}
}