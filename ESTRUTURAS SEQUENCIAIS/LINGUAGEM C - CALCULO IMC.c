#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    //DEFINIÇÃO DE VARIAVEIS
    float a, p ;
    
    //BIBLIOTECA PARA PORTUGU�S
    setlocale(LC_ALL,"Portuguese");
    
    //RECEBER A ALTURA DO �SUARIO.
    printf("Digite Sua Altura:\n ");
    scanf("%f", &a);
    
    //RECEBER O PESO DO �SUARIO
    printf("Digite Seu Peso:\n ");
    scanf("%f", &p);
    
    //CALCULAR O IMC DO �SUARIO P/(A*A)
    printf("O IMC �: %.2f", p/ pow(a,2));
    
    return(0);
    }

