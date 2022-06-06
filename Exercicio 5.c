#include <stdio.h>
  void main(){
		//declaração de variáveis
			int nota, resto;
			int n100, n50, n20, n10, n5, n2, n1;
		//comandos
			printf("Informe a quantia de dinheiro: ");
			scanf("%d", &nota);
      
    
				n100=nota/100;
				printf("A quantidade de notas de 100 e: %d\n ", n100);
			  resto=nota%100;
    
				n50=resto/50;
				printf("A quantidade de notas de 50 e: %d\n ", n50);
				resto=resto%50;
       
			  n20=resto/20;
				printf("A quantidade de notas de 20 e: %d\n ", n20);
				resto=resto%20;
    
        n10=resto/10;
  			printf("A quantidade de notas de 10 e: %d\n ", n10);
  			resto=resto%10;
                
        n5=resto/5;
				printf("A quantidade de notas de 5 e: %d\n ", n5);
				resto=resto%5;
                      
        n2=resto/2;
				printf("A quantidade de notas de 2 e: %d\n ", n2);
				resto=resto%2;
                          
				n1=resto/1; 
				printf("A quantidade de moedas de 1 e: %d\n ", n1);
				resto=resto%1;
                            
    
}