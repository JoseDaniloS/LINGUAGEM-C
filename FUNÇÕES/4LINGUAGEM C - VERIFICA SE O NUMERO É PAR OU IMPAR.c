#include <stdio.h>
#include <locale.h>

//PROT�TIPO DA FUN��O
void verificador(int valor);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	int x ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AO USUARIO UM VALOR INTEIRO
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	//CHAMADA DA FUN��O "verificador"
	verificador(x);
	
	return 0;
}

//FUN��O PARA VERIFICAR SE O VALOR INSERIDO � PAR OU �MPAR.
void verificador(int valor){
	if(valor % 2 == 0){
		printf("%i � Par",valor);	
	}
	else{
		printf("%i � �mpar",valor);	
	}
}