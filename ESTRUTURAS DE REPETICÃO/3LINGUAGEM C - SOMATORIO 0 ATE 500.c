#include <stdio.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	int cont, x = 0 ;
	
	//ESTRUTURA DE REPETI��O DE 0 ATE 500
	for(cont = 0; cont <= 500; cont++){
		
		//SOMA DE X = CONT + X
		x += cont;
		
		}
		
		//EXIBINDO O SOMATORIO DE 0 ATE 500
		printf("%i", x);	
		
	return 0;
}