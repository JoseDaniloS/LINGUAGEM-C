#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINICAO DE VARIAVEIS
	int macas ;
	float preco;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO QUANTAS MACAS O USUARIO VAI COMPRAR
	printf("Digite Quantas ma�as voc� deseja comprar: ");
	scanf("%i", &macas);
	
	//VERIFICANDO SE O USUARIO COMPROU MAIS DO QUE 12 MACAS
	//SE ELE COMPROU MAIOR OU IGUAL A 12 PAGAR� 1.10
	//SE ELE COMPROU ABAIXO DE 12 ELE PAGAR� 1.30
	if(macas <= 12){
		
		preco = macas * 1.30 ;
		printf("Voc� ira pagar %.2f por %i ma�as.", preco, macas);
	}
	else{
		
		preco = macas * 1.10 ;
		printf("Voc� ira pagar %.2f por %i macas.", preco, macas);
	}
	
	return 0;
}