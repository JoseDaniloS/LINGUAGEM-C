#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x ;

	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO UM N�MERO INTEIRO AO USUARIO
	printf("Digite um N�mero Inteiro:");
	scanf("%i", &x);
	
	//VERIFICANDO SE O NUMERO � POSITIVO
	if(x > 0){
		printf("%i � um n�mero positivo.", x);
	}
	
	//VERIFICANDO SE O NUMERO � NEGATIVO
	else if(x < 0){
		printf("%i � um n�mero negativo.", x);
	}
	//VERIFICANDO SE O NUMERO � NEUTRO
	else{
		printf("%i � um n�mero neutro.", x);
	}
	return 0;
}