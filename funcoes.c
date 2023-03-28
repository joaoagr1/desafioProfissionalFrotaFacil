#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

char cadastroUsuario[30], cadastroSenha[30];
 
int main(){

 do{
    printf("Vamos Cadastrar um usuário\n");
    printf("Insira seu nome de usuário:   \n");
    gets(cadastroUsuario);
    fflush(stdin);
    if (20<strlen(cadastroUsuario)<5)
    {
        printf("O nome deve ter mais de 5 e menos de 20 caracteres");
    } 
    }while(20<strlen(cadastroUsuario) && strlen(cadastroUsuario)<5);



    return;
}