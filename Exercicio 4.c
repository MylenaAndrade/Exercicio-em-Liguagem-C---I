#include<stdio.h>
  void main(){
  /*
    Um banco concederá um crédito especial aos seus clientes, 
    variável com o saldo médio no último ano. Faça um algoritmo 
    que calcule o valor do crédito de acordo com a tabela abaixo.
      ---------------------------------------------
            Saldo Médio      |     Percentual
      ---------------------- | -------------------
      Inferior a R$ 1000,00  |    nenhum crédito
      ---------------------- | --------------------
        De R$ 1000,00 a      |
        R$ 1499,99           |    20% do saldo médio
      ---------------------- | ---------------------
        De R$ 1500,00 a      |
        R$ 2499,99           |    30% do saldo médio
      ---------------------- | ----------------------
        R$ 2500,00 ou mais   |    40% do saldo médio
      -----------------------------------------------
  */
      //declaração de variáveis
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
