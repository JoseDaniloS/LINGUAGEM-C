#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEIS
	int operacao ;
	float x, y, z ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//EXIBINDO AS OPERA��ES DISPONIVEIS
	printf("CALCULADORA - EM - C: \n");
	printf(" 1 - ADI��O \n");
	printf(" 2 - SUBTRA��O \n");
	printf(" 3 - MULTIPLICA��O \n");
	printf(" 4 - DIVIS�O  \n");
	
	//SOLICITANDO AO USUARIO UMA DAS OP��ES ACIMA
	printf("SELECIONE QUAL OPERA��O DEJESA REALIZAR:");
	scanf("%i", &operacao);
	switch(operacao)
	{
		
	//OPERA��O DE ADI��O
	case 1:
		printf("\nVoc� selecionou Adi��o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		z = x + y ;
		printf("%.1f + %.1f = %.1f", x, y, z);
		break;
	
	//OPERA��O DE SUBTRA��O
	case 2:
		printf("\nVoc� selecionou Subtra��o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		z = x - y ;
		printf("%.1f - %.1f = %.1f", x, y, z);
		break;
	
	//OPERA��O DE MULTIPLICA��O
	case 3:
		printf("\nVoc� selecionou Multiplica��o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		z = x * y ;
		printf("%.1f x %.1f = %.1f", x, y, z);
		break;
	
	//OPERA��O DE DIVIS�O
	case 4:
		printf("\nVoc� selecionou Divis�o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		if(y == 0){
			printf("Denominador Invalido!");
		}
		else
		{
		z = x / y ;
		printf("%.1f / %.1f = %.2f", x, y, z);	
		}
		break;
	
	//CASO O N�MERO QUE O USUARIO DIGITAR SEJA INVALIDO
	default:
		printf("Op��o Invalido!");
		break;
	}
	return 0;
}