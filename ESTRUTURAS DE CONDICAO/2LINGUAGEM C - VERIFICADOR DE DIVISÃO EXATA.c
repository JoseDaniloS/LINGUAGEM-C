#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFININDO AS VARIAVEIS
	int x, y ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO O PRIMEIRO N�MERO
	printf("Digite O N�merador Inteiro: ");
	scanf("%i", &x);
	
	//SOLICITANDO AO USUARIO O SEGUNDO N�MERO
	printf("Digite O Denominador Inteiro: ");
	scanf("%i", &y);
	
	//VERIFICANDO SE O DENOMINADOR � DIFERENTE DE 0
	if(y == 0){
		printf("N�o � possivel realizar essa opera��o.");
		return 0;
	}
	
	else{
		//VERIFICANDO SE A DIVIS�O DO PRIMEIRO NUMERO PELO SEGUNDO � EXATA. OU SEJA
		// DA RESTO 0.
		if(x % y == 0){
			
			printf("� divisivel!");
		}
		//EXEBINDO A MENSAGEM "N�O � DIVISIVEL" CASO N�O SEJA.
		else
		{
			printf("N�o � divisivel!");
		}	
	}
	
	return 0;
}