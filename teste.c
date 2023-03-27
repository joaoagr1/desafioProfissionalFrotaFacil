
/* ---------------------------------BIBLIOTECAS--------------------------------------- */
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>




/* ---------------------------------VARIAVEIS--------------------------------------- */

    char cadastroUsuario[30];
    char cadastroSenha[30];
    char login[30];
    char senha[30];

struct pessoa{
    char login[30]; 
    char senha[30]; 
} pessoa;




/* ---------------------------------PRINCIPAL--------------------------------------- */

int main(){

   
    funcaoCadastro();
    

    strcpy(pessoa.login, cadastroUsuario);
    strcpy(pessoa.senha, cadastroSenha); 
    

    funcaoLogin();
    
    return 0;
}




/* ---------------------------------FUNÇÕES--------------------------------------- */

funcaoCadastro(){

    printf("Vamos Cadastrar um usuário\n");
    printf("Insira seu nome de usuário:   \n");
    gets(cadastroUsuario);
    fflush(stdin);
    
    printf("Vamos cadastrar uma senha");
    gets(cadastroSenha);
    fflush(stdin);

     strcpy(pessoa.login, cadastroUsuario);
    strcpy(pessoa.senha, cadastroSenha);

    return;
}



funcaoLogin(){
    
    printf("\nlogin:");
    gets(login);
    fflush(stdin);

    printf("\nsenha:");
    gets(senha); 
    fflush(stdin);
                
    return validacaoLogin();
    }



    validacaoLogin(){
        if ((strcmp(login,pessoa.login)==0) && (strcmp(senha,pessoa.senha)==0)){ 
        printf("Usuário logado");
    }else{
        printf("Login e/ou senha incorretos"); 
    }

    }