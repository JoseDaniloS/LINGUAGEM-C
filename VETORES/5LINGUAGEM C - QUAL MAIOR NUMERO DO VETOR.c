#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI��O DE VARIAVEISE VETOR
	int i, maior, menor, v[10];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL, "Portuguese");
	
	
	//LOOPING SOLICITANDO 10 NUMEROS AO USUARIO
	for(i = 0; i < 10; i++){
		printf("Digite o %i n�mero: ", i + 1);
		scanf("%i", &v[i]);
	}
	
	//LOOPING PARA VERIFICAR QUAL MAIOR E O MENOR N�MERO DO VETOR
	for(i = 0; i < 10; i++){
			
			if(v[i] > maior){
				
				maior = v[i];
				
				
			}
			if(v[i] < menor){
				menor = v[i];
			}
			
	}
	
	//EXIBINDO QUAIS S�O O MAIOR E O MENOR NUMERO DO VETOR
	printf("O maior n�mero do vetor �: %i \n", maior);
	printf("O menor n�mero do vetor �: %i", menor);
		
	
	return 0;
}