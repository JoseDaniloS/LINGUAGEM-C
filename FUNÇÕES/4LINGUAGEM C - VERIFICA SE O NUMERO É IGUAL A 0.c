#include <stdio.h>
#include <locale.h>

//PROTOTIPO DA FUN��O
void function(int valor);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//CHAMANDO A FUN��O QUE VAI VERIFICAR SE O N�MERO INFORMADO � IGUAL A ZERO
	function(x);
	
	return(0);
}

//DEFINI��O DA FUN��O
void function(int valor){
	if(valor == 0){
		printf("%i � igual a zero!", valor);
	}
	
	else{
		printf("O n�mero informado n�o � igual a zero!");
	}
}