#include <stdio.h>
int main(){
    int a, b;
    printf("a sonini kriting:");
    scanf("%d", &a);
    printf("b sonini kriting:");
    scanf("%d", &b);
    if (a > b){
        printf("a katta.\n");
    }else if(b > a){
        printf("b katta.\n");
    }else{
        printf("Voy ular teng\n");
    }



//  a va b sonlari berilgan.  Berilgan ikkita sondan kattasini konsolga chiqaring. Agar ular teng bo'lsa 'Voy ular teng' yozuvi chiqsin.

    return 0;
}