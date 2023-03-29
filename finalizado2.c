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

    system("clear");

    funcaoCadastro(); // Chama o procedimento de Cadastro

   
    system("clear");

    

    strcpy(p[0].login, cadastroUsuario); // Copia o nome do usuario no login da pessoa 0
    strcpy(p[0].senha, cadastroSenha); // Copia a senha cadastrada no campo senha da pessoa 0 
    

    system("clear");

    funcaoLogin(); // Chama função funcaoLogin
    
    return 0;
}




/* ---------------------------------FUNÇÕES--------------------------------------- */

funcaoCadastro(){ //Função que solicita os dados a serem cadastrados
    printf("<-----Vamos Cadastrar um usuário----->\n\n");
    do{
    
    printf("\n Insira seu nome de usuário:   ");
    gets(cadastroUsuario);
    fflush(stdin);
    if (20<strlen(cadastroUsuario) || strlen(cadastroUsuario)<5)
    {
        printf(" <-----O nome deve ter mais de 5 e menos de 20 caracteres----->");
        
    } 
    }while(20<strlen(cadastroUsuario) || strlen(cadastroUsuario)<5);

    


    do{

    printf("\n Vamos cadastrar uma senha:   ");
    gets(cadastroSenha);
    fflush(stdin);

    if (20<strlen(cadastroSenha) || strlen(cadastroSenha)<5)
    {
        printf(" <-----A senha deve ter mais de 5 e menos de 20 caracteres----->");
    } 
    }while(20<strlen(cadastroSenha) || strlen(cadastroSenha)<5);




     strcpy(p[0].login, cadastroUsuario);
    strcpy(p[0].senha, cadastroSenha);

    return;
}



funcaoLogin(){ //Função que solicita os dados já cadastrados para validação

    printf("<-----Vamos efetuar o login----->\n\n\n");
    printf("login:   ");
    gets(login);
    fflush(stdin);

    printf("senha:   ");
    gets(senha); 
    fflush(stdin);

    system("clear");
                
    return validacaoLogin(); //Retorna chamando função de autênticação
    }



    validacaoLogin(){ //Função que compara o valor inserido no login com os valores de pessoa
        if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){ 
        printf("<-----Usuário logado----->");
    }else{
        printf("<-----Login e/ou senha incorretos----->"); 
    }

        

    }