#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	int n1, n2 ;
	
	//COLOCANDO O IDIOMA EM PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O PRIMEIRO N�MERO
	printf("Digite o Primeiro N�mero:\n");
	scanf("%i", &n1);
	
	//SOLI�ITANDO O SEGUNDO N�MERO
	printf("Digite o Segundo N�mero:\n");
	scanf("%i", &n2);
	
	//EXIBINDO O DOBRO DO PRIMEIRO N�MERO
	printf("O Dobro do Primeiro N�mero �: %i\n", (n1*2));
	
	//EXIBINDO O TRIPLO DO SEGUNDO N�MERO
	printf("O Triplo do Segundo N�mero �: %i\n", (n2*3));
	
	
	return(0);
}