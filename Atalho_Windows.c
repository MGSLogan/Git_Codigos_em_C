#include <stdio.h>

 int main ()
 
 {
     int n;
     printf(" O que voce deseja abrir???\n\n");
     printf(" 1° Abrir a calculadora.\n");
     printf(" 2° Abrir o Windows Explorer.\n");
     printf(" 3° Abrir o bloco de notas.\n");
     scanf("%d", &n);
     
     switch (n)
     {
     
     case 1:
          printf("\n Voce escolheu executar a calculadora.\a\n");
          system("calc.exe");
          break;
     
     case 2:
          system("explorer.exe"); 
          break;
          
     case 3:
          system("notepad.exe"); 
          break;
          
     default:
          printf("Nenhuma das opcoes foi feita!!!\n\n");                
      }
     
     
     
     
     
     
     system("pause");
     return 0;
 }    
 
