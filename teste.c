#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


struct pessoa{
    char login[30]; 
    char senha[30]; 
} pessoa;


int main(){

    char cadastroUsuario[30];
    char cadastroSenha[30];

    char login[30];
    char senha[30];


    printf("Vamos Cadastrar um usuário\n");
    printf("Insira seu nome de usuário:   \n");
    gets(cadastroUsuario);
    fflush(stdin);

    printf("%s",cadastroUsuario);


    return 0;
}