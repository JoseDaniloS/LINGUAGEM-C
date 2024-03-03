#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x, y, cont, valor, contador;
	
	//MUDANDO O IDIOMA
	setlocale(LC_ALL,"Portuguese");

	//SOLICITANDO O PRIMEIRO NUMERO E VERIFICANDO SE � MAIOR QUE 0
	printf("Digite o Primeiro N�mero");
	scanf("%i", &x);
	if(x <= 0){
		printf("Digite um numero maior que 0");
		return 0;
	}
	
	//SOLICITANDO O SEGUNDO NUMERO E VERIFICANDO SE � MAIOR QUE O PRIMEIRO E MAIOR QUE 0
	printf("Digite o Segundo N�mero");
	scanf("%i", &y);
	if((y < x)||(y <= 0)){
		printf("Digite um numero maior que 0");
		return 0;
	}
	
	//LOOPING DE X(1� NUMERO) ATE Y(2� NUMERO)
	for(cont = x; cont <= y; cont++){
		
		//RESETA O CONTADOR
		contador = 0;
		
		//LOOPING DE 1 ATE O NUMERO QUE A VARIAVEL CONT ASSUMIR
		for(valor = 1; valor <= cont; valor++){
			
			//VERIFICA SE O NUMERO � DIVISIVEL POR 1 E POR ELE MESMO
			if(cont % valor == 0){
				
				contador++;
			}	
		}
			
			//SE O CONTADOR CHEGAR A 2(TIVER 2 DIVISORES) ELE � PRIMO
			if(contador == 2){
					
					//EXIBE O NUMERO PRIMO
					printf("%i � um numero primo\n", cont);	
					
			}
			
		}
	return 0;
}