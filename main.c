#include <stdio.h>

int main(void) {
    int num;
    int i;
    printf("inserisci un numero intero positivo:");
    scanf("%d",&num);
    for(int i=2;i<=sqrt(num);i++) {
        while(num%i==0) {
            printf("%d",i);
            num/=i;
        }
    }
    if(num>1) {
        printf("%d",num);
    }
    if(num>0) {
        printf("fattori primi di %d: ",num);
    }else {
        printf("per favore inserisciun numero intero positivo.");
    }
}
