#include <stdio.h>
/*
  Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
                          Exemplos:
                    01/01 - 1o dia do ano
                    03/02 - 34o dia do ano
*/
void main(){
  //declaração de variáveis 
        int dia, mes, s;
  //comandos
        printf("Informe uma data (DD MM): ");
        scanf("%d %d", &dia, &mes);
          if((mes==1) && (dia<=31))//janeiro
           {
              printf("O dia da data informada e: %d", dia);
           }else
              {
                if((mes==2) && (dia<=28))//fevereiro
                 {
                   s=31+dia;
                   printf("O dia da data informada e: %d", s);
                 }else
                    {
                      if((mes==3) && (dia<=31))//março
                        {
                          s=31+28+dia;
                          printf("O dia da data informada e: %d", s);
                        }else
                            {
                              if((mes==4) && (dia<=30))//abril
                                {
                                  s=31+28+31+dia;
                                  printf("O dia da data informada e: %d", s);
                                }else
                                   {
                                      if((mes==5) && (dia<=31))//maio
                                        {
                                          s=31+28+31+30+dia;
                                          printf("O dia da data informada e: %d", s);
                                         }else
                                            {
                                              if((mes==6) && (dia<=30))//junho
                                                {
                                                    s=31+28+31+30+31+dia;
                                                    printf("O dia da data informada e: %d", s);
                                                }else
                                                   {
                                                      if((mes==7) && (dia<=31))//julho
                                                       {
                                                          s=31+28+31+30+31+30+dia;
                                                          printf("O dia da data informada e: %d", s);
                                                       }else
                                                          {
                                                             if((mes==8) && (dia<=31))//agosto
                                                              {
                                                                s=31+28+31+30+31+30+31+dia;
                                                                printf("O dia da data informada e: %d", s);
                                                              }else
                                                                 {
                                                                    if((mes==9) && (dia<=30))//setembro
                                                                      {
                                                                        s=31+28+31+30+31+30+31+31+dia;
                                                                        printf("O dia da data informada e: %d", s);
                                                                      }else
                                                                         {
                                                                           if((mes==10) && (dia<=31))//outubro
                                                                            {
                                                                              s=31+28+31+30+31+30+31+31+30+dia;
                                                                              printf("O dia da data informada e: %d", s);
                                                                            }else
                                                                               {
                                                                                 if((mes==11) && (dia<=30))//novembro
                                                                                  {
                                                                                    s=31+28+31+30+31+30+31+31+30+31+dia;
                                                                                    printf("O dia da data informada e: %d", s);
                                                                                  }else//dezembro
                                                                                     {
                                                                                       s=31+28+31+30+31+30+31+31+30+31+30+dia;
                                                                                      printf("O dia da data informada e: %d", s);
                                                                                     }
                                                                                }
                                                                   
                                                                          }
                                                                  }
                                                     
                                                          }
                                                    }
                                            }
                                    }
                            }
                    }
            }
}