#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
 
 int main(){
 int tam = 0;
 char usuario[80], senha[80], senha2[80];
 memset(usuario, 0x00, sizeof(usuario));
 memset(senha, 0x00, sizeof(senha));
 memset(senha2, 0x00, sizeof(senha2));

 printf("Digite o usuario. -> ");
 scanf("%s", &usuario);
 printf("Digite a senha. -> ");
 fflush(stdin);

    do
    {   
         senha[tam] = getch();          
         if(senha[tam] == 0x08 && tam > 0)  //Backspace
         {   
            printf("\b \b"); 
            senha[tam] = 0x00;
            tam--;

         } 
         else if (senha[tam] == 13) // Enter
         {  
            senha[tam] = 0x00;
            break;
        }
        else if (senha[tam] != 0x08)
        {
            putchar('*');
            tam++;              
         }
    }while(tam < 10) ;

printf("\nDigite a senha novamente ->");


return;
 }