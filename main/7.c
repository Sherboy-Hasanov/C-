#include <stdio.h>
int main(){

int a;

printf("Son kriting: ");
scanf("%d", &a);

if(a > 0){
    printf("Musbat son. \n");
}
else if(a < 0){
    printf("Manfiy son. \n");
}else{
    printf("%d\n", a);
}

// a soni berilgan. Sonning musbat yoki manfiy ekanligini aniqlang. Son 0 ga teng bo'lsa, 0 ni konsolga chiqaring.
    return 0;
}