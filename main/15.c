#include <stdio.h>

int main(){

    int a,b,c;

    printf("Uchburchak tomonlarin kriting: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b){
        printf("true\n");
    }else{
        printf("false\n");
    }



// a,b,c sonlari berilgan . Shu sonlar uchburchakning tomonlari ekanligini aniqlang.
// Agar kelgan sonlar uchburchakning tomonlari bo'lsa ,true  konsolga  chiqaring,  bo'lmasa false konsolga chiqaring.

    return 0;
}