#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
char senha[5];
int i;

for (i=0;i<4;i++) {
    senha[i]=getch();
    printf("*");
}
senha[i]='';
system("pause");
}