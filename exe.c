#include <stdio.h>
#include <string.h>
int buscaPalavra(char*, char*);

int main(){
    char palavra[]= "alface";
    char texto[] = "em um belo dia josé foi a sua horta colher alface e tomate.";
    printf("%d\n", buscaPalavra(palavra, texto));
}

int buscaPalavra(char* palavra, char* texto){
    int i=0,j=0;
    for (i=0; i != strlen(texto); i++) {
        if(texto[i]==palavra[j]){
            j++;
        }else{
            j=0;
        }
        if (j == strlen(palavra)) {
            break;
        }
    }
    return (i-(strlen(palavra)-1));
}