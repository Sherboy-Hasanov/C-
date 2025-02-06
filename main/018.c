#include <stdio.h>

int main(){

int a,b;

printf ("a va b sonlarini kriting: ");
scanf("%d %d", &a, &b);

if (a < b){
    printf("%d\n", a);
}else if(b < a){
    printf("%d\n", b);
}else{
    printf("teng\n");
}

// a, b sonlari berilgan.
// Berilgan ikkita sondan  kichigini  toping  va shu sonni konsolga chiqaring. Agar ular teng bo'lsa 'teng' so'zini konsolga chiqaring.



    return 0;
}