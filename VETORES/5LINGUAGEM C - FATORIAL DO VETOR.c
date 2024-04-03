#include <stdio.h>
#include <locale.h>

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS E VETORES
	int cont, i, fatorial, numero, v1[5], v2[5];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL, "Portuguese");
	
	//LOOPING PARA SOLICITAR E VERIFICAR SE O VALOR QUE O USUARIO DIGITOU � POSITIVO
	for(i = 0; i < 5; i++){
		do{
			printf("Digite o %i n�mero: ", i + 1);
			scanf("%i", &v1[i]);
			if(v1[i] < 0){
				printf("Voc� digitou um valor negativo.\n");
			}
		}while(v1[i] < 0);
	}
	
	//LOOPING PARA CALCULAR O FATORIAL DOS VALORES INSERIDOS PELO USUARIO
	for(i = 0; i < 5; i++){
		fatorial = 1;
		for(cont = v1[i]; cont >= 1; cont--){
			fatorial = cont * fatorial;
		}
		v2[i] = fatorial;
	}
	
	//EXIBINDO O CONTEUDO DO VETOR 'v1'
	printf("Conteudo do vetor (v1): \n");
	for(i = 0; i < 5; i++){
		printf("%i ", v1[i]);
	}
	
	//EXIBINDO O CONTEUDO DO VETOR 'v2'
	printf("\n Conteudo do vetor (v2): \n");
	for(i = 0; i < 5; i++){
		printf("%i ", v2[i]);
	}
		
	
	
	return 0;
}