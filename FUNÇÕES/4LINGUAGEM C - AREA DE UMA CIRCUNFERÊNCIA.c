#include <stdio.h>
#include <locale.h>
#include <math.h>

//PROT�TIPO DA FUN��O
float verificador(float r);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	float x, area ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO O VALOR DO RAIO DE UM CIRCULO
	printf("Digite O Valor Do Raio de um Circulo: ");
	scanf("%f", &x);
	
	//CHAMADA DA FUN��O "verificador"
	area = verificador(x);
	
	printf("A Ar�a da circunferencia �: %f", area);
	
	return 0;
}

//FUN��O PARA CALCULAR A AREA DE UM CIRCULO
float verificador(float r){
	
	//DEFINI��O DE VARIAVEIS
	float x ;
	
	//CALCULANDO A AREA DO CIRCULO
	x = (3.14 * pow(r, 2));
	
	//RETORNANDO O VALOR PARA A FUN��O PRINCIPAL
	return(x);
	
}