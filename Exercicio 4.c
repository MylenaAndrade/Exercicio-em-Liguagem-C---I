#include<stdio.h>
  void main(){
  /*
    Um banco conceder� um cr�dito especial aos seus clientes, 
    vari�vel com o saldo m�dio no �ltimo ano. Fa�a um algoritmo 
    que calcule o valor do cr�dito de acordo com a tabela abaixo.
      ---------------------------------------------
            Saldo M�dio      |     Percentual
      ---------------------- | -------------------
      Inferior a R$ 1000,00  |    nenhum cr�dito
      ---------------------- | --------------------
        De R$ 1000,00 a      |
        R$ 1499,99           |    20% do saldo m�dio
      ---------------------- | ---------------------
        De R$ 1500,00 a      |
        R$ 2499,99           |    30% do saldo m�dio
      ---------------------- | ----------------------
        R$ 2500,00 ou mais   |    40% do saldo m�dio
      -----------------------------------------------
  */
      //declara��o de vari�veis
          float sm, ce;
      //comandos
          printf("Escreva o valor do seu salario: ");
          scanf("%f", &sm);
            if(sm<=1000)
            {
              printf("NENHUM CREDITO");
            }else
              {
                  if(sm<1500)
                  {
                    sm=(0.2*sm);
                    printf("O valor do seu credito especial e: %.2f", sm);
                  }else
                    {
                      if(sm>1499.99 && sm<2500.00)
                      {
                        sm=(0.3*sm);
                        printf("O valor do seu credito especial e: %.2f", sm);
                      }else
                        {
                          sm=(0.4*sm);
                          printf("O valor do seu credito especial e: %.2f", sm);
                        }
                    }
              }
  }
