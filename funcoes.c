/*-------------- SISTEMA DE LOGIN E SENHA: [CMD/TERMINAL] ------------
By: David Robert | link do tutorial no youtube: https://youtu.be/kePxRO98lEY */

#include <stdio.h> // padrão
#include <stdlib.h> // padrão
#include <string.h> // Essa biblioteca serve para usar os structs e manipulação de strings


typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
} pessoa; pessoa p[0];  // diminuindo o nome da struct para "p" e o "[1]" é o máximo de pessoas com logins e senhas


int main(){

    char cadastroUsuario[30];
    char cadastroSenha[30];

    char login[30];
    char senha[30];


    printf("Vamos Cadastrar um usuário\n");
    printf("Insira seu nome de usuário:   \n");
    scanf("%s",&cadastroUsuario[30]);
    
    printf("Vamos cadastrar uma senha");
    scanf("%s",&cadastroSenha[30]);


     

    strcpy(p[0].login, cadastroUsuario);
    strcpy(p[0].senha, cadastroSenha); 
    printf("\nlogin:");
    scanf("%s", login); // armazenando os dados inseridos pelo usuário para o vetor login que está dentro da função main

    printf("\nsenha:");
    scanf("%s", senha); // armazenando os dados inseridos pelo usuário para o vetor senha que está dentro da função main

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){ // A função strcmp é responsável por comparar string com string
        printf("Usuário logado"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da função main, usuário será logado.
    }else{
        printf("Login e/ou senha incorretos"); // senão, login ou senha incorreta.
    }
    return 0;
}