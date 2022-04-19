// Aluno: André Junges Baratto
// Número USP: 13731107

#include <stdio.h>
void main()
{
    char C;
     printf("Digite 's':\n");  //inicialmente o comando pede para digitar o caractere 's'
      scanf("%s", &C);
      do{
            printf("O caractere digitado nao e 's'.\nDigite 's':\n");  //enquanto o caractere não for 's', o do-while vai continuar repetindo
             scanf("%s", &C);
      } while(C!='s');
       printf("Parabens, voce sabe reconhecer o caractere 's'\n");  //quando o comando recebe o caractere 's', ele segue para o printf, terminando o comando
}
