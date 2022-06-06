#include <stdio.h>
  /*
      Escreva um algoritmo para calcular o salário semanal de uma 
      pessoa, determinado pelas condições que seguem: se o número 
      de horas trabalhado for inferior ou igual a 40, a pessoa
      recebe x reais por hora; caso contrário, a pessoa recebe um 
      adicional de 50% para cada  hora trabalhada acima das 40 iniciais.
  */
void main(){
    //declaração de variáveis
        int salarioS;
        int horasT;
    //comandos
          printf("Informe o numero de horas trabalhadas: ");
          scanf("%d", &horasT);
            if(horasT<=40)
              {
                salarioS=100*horasT;
                printf("Seu salario e de %d reais", salarioS);
              }else
                 {
                   salarioS=((100*horasT) + (1.5*horasT));
                   printf("Seu salario e de %d reais", salarioS);
                 }






  
}