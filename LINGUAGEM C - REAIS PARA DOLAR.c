#include <stdio.h>
#include <locale.h>


int main(){
	
	//DEFINI��O DE VARIAVEIS
	float dolar, reais ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO A COTA��O ATUAL DO DOLAR
	printf("Qual a cota��o do dolar atualmente?");
	scanf("%f", &dolar);

	//SOLICITANDO A QUANTIDADE DE REAIS QUE SER�O CONVERTIDOS
	printf("\nQuantos reais voc� deseja converter?");
	scanf("%f", &reais);
	
	//CONVERS�O DE REAIS PARA DOLARES
	dolar = reais / dolar ;
	
	//EXIBINDO QUANTOS REAIS FORAM CONVERTIDOS EM DOLARES
	printf("\n %.2f Reais foram convertidos em %.2f Dolares.", reais, dolar);
		
	return(0);
}