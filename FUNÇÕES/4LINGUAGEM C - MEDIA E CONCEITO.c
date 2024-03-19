#include <stdio.h>
#include <locale.h>

//PROT�TIPO DAS FUN��ES
float media (float n1, float n2, float n3);
void conceito(float conceito);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	float nota1, nota2, nota3, MA;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO AS TRES NOTAS DO USUARIO
	printf("Digite A Primeira Nota: ");
	scanf("%f", &nota1);
	printf("Digite A Segunda Nota: ");
	scanf("%f", &nota2);
	printf("Digite A Terceira Nota: ");
	scanf("%f", &nota3);
	
	//CHAMANDO A FUN��O "media" PARA CALCULAR A MEDIA ARITM�TICA DO ALUNO
	MA = media(nota1, nota2, nota3);
	
	//CHAMANDO A FUN��O "conceito" PARA VERIFICAR QUAL CONCEITO O ALUNO OBTEVE
	conceito(MA);
	
	return 0;
}

//FUN��O QUE CALCULA A MEDIA ARITM�TICA DO ALUNO
float media(float n1, float n2, float n3){
	float MA;
	
	MA = (n1+n2+n3)/3;
	
	return(MA);
	
}

//FUN��O QUE VERIFICA QUAL CONCEITO O ALUNO OBTEVE
void conceito(float media){
	
	if(media >= 9){
		
		printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito A\n", media);
		
	}
	else if((media >= 7)&&(media < 9)){
		
		printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito B\n", media);
			
	}
	else if((media >= 6)&&(media < 7)){
		
		printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito C\n", media);
		
	}
	else if((media >= 4)&&(media <6)){
			
		printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito D\n", media);
		
	}
	else{
		
		printf("O Aluno obteve a nota: %2.f\n Obteve o Conceito E\n", media);
		
	}
}