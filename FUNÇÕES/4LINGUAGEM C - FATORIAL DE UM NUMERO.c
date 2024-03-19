#include <stdio.h>
#include <locale.h>

//PROT�TIPO DA FUN��O
int fatorial(int valor);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x, y;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//VERIFICA SE O NUMERO INFORMADO � POSITIVO, CASO N�O SEJA ELE ENCERRA O ALGORITMO
	if(x > 0){
		
		//CHAMADA DA FUN��O "fatorial" RECEBE NA VARIAVEL "y"
		y = fatorial(x);
		
		//EXIBINDO O FATORIAL DE "x"
		printf("%i! = %i", x, y);
	}
	else{
		
		printf("Digite um n�mero positivo");
			
	}
	return 0;
}

//FUN��O PARA CALCULAR O FATORIAL DO VALOR INFORMADO PELO USUARIO
int fatorial(int valor){
	
	//DEFINI��O DE VARIAVEIS
	int cont, fatorial = 1;
	
		//CALCULAR O FATORIAL DO NUMERO
		for(cont = valor; cont >=1; cont--){
			
			fatorial = cont * fatorial ;
		}
		return(fatorial);
}