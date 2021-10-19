#include <stdio.h>
#include <stdlib.h>


char TECLA;
float R, A, B;


int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);
   
     int main (void)
{
     int OPCAO = 0;
     while (OPCAO != 5)
     
     {
           system ("cls");
           printf("\n\n Menu Principal\n ");
           printf("--------------\n\n ");
           printf(" 1 - Adicao\n ");
           printf(" 2 - Subtracao\n ");
           printf(" 3 - Multiplicacao\n ");
           printf(" 4 - Divisao\n ");
           printf(" 5 - Fim de Progama\n\n ");
           printf(" Escolha uma Opcao : ");
           fflush(stdin);
           scanf("%d", &OPCAO);
           if (OPCAO != 5)
             {
               switch (OPCAO) 
                 {
                   case 1  : rotadicao();          break;
                   case 2  : rotsubtracao();       break;
                   case 3  : rotmultiplicacao();   break;
                   case 4  : rotdivisao();         break;
                   default : printf(" Opcao invalida - Tecle <ENTER> ");
                             fflush(stdin);
                             while (( TECLA = getchar ()) != '\r')
                             break;
                 }
           }
      }
    return 0;
}
    
void entrada (void)  
{
     printf(" Entre um valor para A: ");
     fflush(stdin); scanf("%f", &A);
     printf(" Entre um valor para B: ");
     fflush(stdin); scanf("%f", &B);
     return;
}

void saida(void)
{
     printf("\n O resultado entre A e B = %6.2f\n ", R);
     printf("\n Tecle <ENTER> para acessar o menu:");
     fflush(stdin); while (( TECLA = getchar() ) != '\r' )
     return;
}

int rotadicao (void)
{
     printf("\n\n Rotina de Soma\n");
     printf(" --------------\n\n");
     entrada();
     R = A + B;
     saida();
     return 0;
} 

int rotsubtracao (void)
{
     printf("\n\n Rotina de Subtracao\n");
     printf(" -------------------\n\n");
     entrada();
     R = A - B;
     saida();
     return 0;
} 

int rotmultiplicacao (void)
{
     printf("\n\n Rotina de Multiplicacao\n");
     printf(" -----------------------\n\n");
     entrada();
     R = A * B;
     saida();
     return 0;
} 

int rotdivisao (void)
{
     printf("\n\n Rotina de Divisao\n");
     printf(" -----------------\n\n");
     entrada();
     if (A == B)
       {
           printf("\n Erro de divisao\n");
           printf("\n Tecle <ENTER> para acessar o menu: ");
           fflush(stdin); while (( TECLA = getchar() ) != '\r')
           return 0;
       }   
     else 
       {
           R = A / B;
           saida ();
       }    
    
     
     
     
     
     system("pause");
     return 0;
}   
