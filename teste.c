
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


    char cadastroUsuario[30];
    char cadastroSenha[30];
    char login[30];
    char senha[30];

struct pessoa{
    char login[30]; 
    char senha[30]; 
} pessoa;


int main(){

   

    


    funcaoCadastro();
    

    strcpy(pessoa.login, cadastroUsuario);
    strcpy(pessoa.senha, cadastroSenha); 
    

    funcaoLogin();
    
    return 0;
}






funcaoCadastro(){

    printf("Vamos Cadastrar um usuário\n");
    printf("Insira seu nome de usuário:   \n");
    gets(cadastroUsuario);
    fflush(stdin);
    
    printf("Vamos cadastrar uma senha");
    gets(cadastroSenha);
    fflush(stdin);

    return;
}




funcaoLogin(){
    
    
    printf("\nlogin:");
    gets(login);
    fflush(stdin);

    printf("\nsenha:");
    gets(senha); 
    fflush(stdin);

    if ((strcmp(login,pessoa.login)==0) && (strcmp(senha,pessoa.senha)==0)){ 
        printf("Usuário logado");
    }else{
        printf("Login e/ou senha incorretos"); 
    }
    return;
    }