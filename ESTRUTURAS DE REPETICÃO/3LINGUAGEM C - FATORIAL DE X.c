#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	int cont, fatorial = 1, x;
	
	//MUDANDO IDIOMA
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO UM VALOR AO USUARIO
	printf("Digite Um Valor: ");
	scanf("%i", &x);
	
	//VERIFICANDO SE O USUARIO DIGITOU UM VALOR POSITIVO
	if(x < 0){
		printf("N�o existe fatorial de n�mero negativo");
	}
	
	//CALCULANDO O FATORIAL DE X
	else{
		for(cont = x; cont >= 1; cont--){
		
		fatorial = cont * fatorial;
		
		}
	}
	
	//IMPRIMINDO O VALOR DO FATORIAL 
	printf("%i! = %i", x, fatorial);
	
	return 0;
}