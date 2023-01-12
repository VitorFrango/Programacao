/*

 Algoritmo de cifra simetrica
 EFolioA - Segurança de redes e computadores

 1 - Pedir uma mensagem e guardar numa array
 2 - cifrar a  mensagem atraves de uma qualquer formula matematica ((2022*11)/30^2) aplicada ao correspondente
    codigo ASCII de cada caracter introduzido
 3 - imprimir o resultado da formula aplicada a cada caracter
 4 - Pedir para introduzir o codigo que devera reverter a cifra para a mensagem original
 5 - Imprimir a mensagem original
*/


#include<stdio.h>
#include<string.h>


int main(){
    char  mesg[999];
    int   mensagem_cifra[999];
    int   tama_msg;



    //pede ao user uma mensagem e grava
    printf("\n Escreva a mensagem (até 999 caracteres) a ser cifrada: \n ");
    scanf("%[^\n]", &mesg);

    // Avalia o tamanho da mensagem e percorre a string onde a mesma esta gravada
    // aplicando a cada caracter  una formula no seu  correspondente codigo ASCII
    tama_msg = strlen(mesg);
    for(int i=0; i<tama_msg; i++){
        mensagem_cifra[i] = (mesg[i])*((2022*11)/30^2);
    }

    // volta a percorrer a string para inprimir a mensagme mas no seu correspondente
    // codigo ASCII apos aplicaa uma formula
    printf (" A sua mensagem cifrada é: \n ");
    for(int i=0; i<tama_msg; i++)
        printf("  %d ", mensagem_cifra[i]);


    //reverte a mensagem cifrada efectuando o processo inverso , pedindo para esse efeito
    // a introdução do codigo gerando anteriormente

    printf("\n Digite o codigo para reverter a cifra:\n");
    for(int i=0; i<tama_msg; i++)
        scanf("%d[^\n] ",&mensagem_cifra[i]);


    for(int i=0;i<tama_msg;i++)
    {
        mesg[i] = (int)(mensagem_cifra[i])/((2022*11)/30^2);
    }

    printf("\n A mensagem original é :\n %s \n", mesg);


    return 0;
}