#include <stdio.h>
#include <string.h>
#define MAX 30

// const int MAX = 30;
char parola1[MAX+1];
char parola2[MAX+1];

int main (void){
    printf("Inserisci prima parola ");
    scanf("%s", parola1);
    printf("Inserisci seconda parola ");
    scanf("%s", parola2);

    if(strstr(parola1, parola2)!=0){
        printf("La seconda parola e contenuta nell'altra");
    } else {
        printf("La seconda parola non e contenuta nell'altra");
    }
    return 0;
}