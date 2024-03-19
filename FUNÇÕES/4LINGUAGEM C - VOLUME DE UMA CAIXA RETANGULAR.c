#include <stdio.h>
#include <locale.h>

//PROT�TIPO DA FUN��O
float verificador(float comprimento, float largura, float altura);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	float x, y, z, volume;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO �SUARIO O COMPRIMENTO, LARGURA E ALTURA DA CAIXA
	printf("Informe o Comprimento: ");
	scanf("%f", &x);
	printf("Informe o Largura: ");
	scanf("%f", &y);
	printf("Informe o Altura: ");
	scanf("%f", &z);
	
	//CHAMADA DA FUN��O "verificador"
	volume = verificador(x, y, z);
	
	//EXIBINDO O VALOR DO VOLUME DA CAIXA RETANGULAR
	printf("O volume da caixa retangular � %.2f", volume);
	
	return 0;
}

//FUN��O PARA CALCULAR O VOLUME DE UMA CAIXA RETANGULAR
float verificador(float comprimento, float largura, float altura){
	
	//DEFINI��O DE VARIAVEIS
	float volume;
	
	//CALCULO DO VOLUIME DA CAIXA
	volume = (comprimento * largura * altura);
	
	//RETORNANDO A FUN��O PRINCIPAL O RESULTADO DO CALCULO
	return(volume);
}