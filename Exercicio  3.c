#include <stdio.h>
  /*  Construir um algoritmo que calcule o peso ideal
      de uma pessoa, de acordo com o seu g�nero e
      altura, utilizando as seguintes f�rmulas:
      ? para homens: (72.7*h)-58
      ? para mulheres: (62.1*h)-44.7
  */
    void main(){
    //declara��o de vari�veis
        float A, peso;
        char genero;
    //comandos
      printf("Digite a sua altura: ");
      scanf("%f", &A);
      printf("Digite o seu genero (M/F): ");
      scanf(" %c", &genero);
      fflush(stdin);
       switch(genero)
         {
           case'm':
            peso= (72.7*A)-58;
            break;
           case'f':
            peso= (62.1*A)-44.7;
            break;
         }
     		printf("O seu peso ideal e: %.2f", peso);

  }
  
  
