#include <stdio.h>
#include <locale.h>

int main(){

	//MUDANDO O IDIOMA	
	setlocale(LC_ALL,"Portuguese");
	
	//DEFININDO VARIAVEIS
	int cont = 0, x ;
	
	//LOOPING DE 1 ATE 10
	for (cont = 1; cont <= 10; cont++) {
		
		//SOLICITANDO A IDADE AO USUARIO
		printf("%i� Idade: ", cont);
		scanf("%i", &x);
		
		//VERIFICANDO SE ELE � ADULTO
		if(x >= 18){
			printf("Voc� � um adulto \n");
		}
		else{
			printf("Voc� n�o � adulto! \n");	
		}
	}
	return 0;
}