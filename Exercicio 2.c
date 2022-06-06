#include <stdio.h>
/*
    Elabore um algoritmo que, dada a idade de um nadador, 
    classifique-o em uma das seguintes categorias:
       -------------------------------------------- 
           Categoria   |    Faixa de idade
       -------------------------------------------- 
           infantil A  |       0 - 4 anos
           infantil B  |       5 - 7 anos
           infantil C  |       8 - 10 anos
           juvenil A   |       11 -13 anos
           juvenil B   |       14- 17 anos
            Adulto     |      18 anos ou mais
       -------------------------------------------- 
*/
  void main(){
  //declração de variáveis
    int idade;
  //comandos
    printf("Informe a sua idade: ");
      scanf("%d", &idade);
      printf("Sua categoria e: ");
        if(idade<5)
        {
          printf("INFANTIL A");
        }else
          {
            if(idade<8)
            {
              printf("INFANTIL B");      
            }else
              {
                if(idade<11)
                {
                  printf("INFANTIL C");
                }else
                  {
                    if(idade<14)
                    {
                      printf("JUVENIL A");
                    }else
                      {
                        if(idade<18)
                        {
                          printf("JUVENIL B");
                        }else
                          {
                            printf("ADULTO");
                          }
                      
                      }
                  }
              }          
          }  
       

  }