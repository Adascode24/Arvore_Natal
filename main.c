
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  /* Minhas Variaveis */
  
  int l;
  int k;
  int j;
  int i;
  
  char se;
  char sd;
  
  system("cls");
  
  printf("\n Sinal Inteiro Direito");
  sd = getch();
  printf("\n Sinal Inteiro Esquerdo");
  se = getch();
  /*Construindo uma Arvore de Natal*/
   printf("\n\n");
    
    for(i = 0 ; i < 4 ;i++){
        
      for(k = 1; k < 5; k++){
          
         for(j= 1; j <=30-(2*1+k); j++)
         printf(" ");
         printf("/");
         for( j = 1; j < (2*i+k); j++)
           printf("%c",se);
         for(j = 1; j< (2*i+k); j++)
           printf("%c",sd);
         printf("\\\n"); //delimitador final da linha
      } 
        
    }
    for(i = 0; i < 2; i++){
        for (j = 0 ; j <38; j++) printf(" ");
        printf(" || \n");
    }
    printf("\n");
    
    for(j = 0; j < 35 ; j++ ) printf(" ");
    printf("Feliz Natal \n");
    for( j = 0; j< 3 ;j++ ) printf(" ");
    printf("E um prospero 2022");
    
    system("pause");

    return 0;
}

