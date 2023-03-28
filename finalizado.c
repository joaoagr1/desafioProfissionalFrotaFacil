/* ---------------------------------BIBLIOTECAS--------------------------------------- */
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>




/* ---------------------------------VARIAVEIS--------------------------------------- */

    char cadastroUsuario[30];
    char cadastroSenha[30];
    char login[30];
    char senha[30];

typedef struct{
    char login[30]; 
    char senha[30]; 
} pessoa; pessoa p[1];




/* ---------------------------------PRINCIPAL--------------------------------------- */

int main(){

   
    funcaoCadastro(); // Chama o procedimento de Cadastro

    

    strcpy(p[0].login, cadastroUsuario); // Copia o nome do usuario no login da pessoa 0
    strcpy(p[0].senha, cadastroSenha); // Copia a senha cadastrada no campo senha da pessoa 0 
    

    funcaoLogin(); // Chama função funcaoLogin
    
    return 0;
}




/* ---------------------------------FUNÇÕES--------------------------------------- */

funcaoCadastro(){ //Função que solicita os dados a serem cadastrados

    do{
    printf("Vamos Cadastrar um usuário\n");
    printf("Insira seu nome de usuário:   ");
    gets(cadastroUsuario);
    fflush(stdin);
    if (20<strlen(cadastroUsuario) || strlen(cadastroUsuario)<5)
    {
        printf("O nome deve ter mais de 5 e menos de 20 caracteres");
    } 
    }while(20<strlen(cadastroUsuario) || strlen(cadastroUsuario)<5);

    


    do{
    printf("Vamos cadastrar uma senha:   ");
    gets(cadastroSenha);
    fflush(stdin);

    if (20<strlen(cadastroSenha) || strlen(cadastroSenha)<5)
    {
        printf("A senha deve ter mais de 5 e menos de 20 caracteres");
    } 
    }while(20<strlen(cadastroSenha) || strlen(cadastroSenha)<5);

    return;
}



funcaoLogin(){ //Função que solicita os dados já cadastrados para validação
    
    printf("\nlogin:");
    gets(login);
    fflush(stdin);

    printf("\nsenha:");
    gets(senha); 
    fflush(stdin);
                
    return validacaoLogin(); //Retorna chamando função de autênticação
    }



    validacaoLogin(){ //Função que compara o valor inserido no login com os valores de pessoa
        if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){ 
        printf("Usuário logado");
    }else{
        printf("Login e/ou senha incorretos"); 
    }

    }