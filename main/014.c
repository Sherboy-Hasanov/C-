#include <stdio.h>

int main(){

    int a, b, c;

printf("Uchburchakning ichki burchaklarini kriting: ");

scanf("%d %d %d", &a, &b, &c);

if (a + b + c == 180 && (a > 0 && b > 0 && c > 0)){
    printf("true\n");
}else{
    printf("false\n");
}




/* a,b,c sonlari berilgan . Shu sonlar uchburchakning ichki burchaklari ekanligini aniqlang.
Agar berilgan  sonlar uchburchakning burchaklari bo'lsa ,  true konsolga chiqaring bo'lmasa false konsolga chiqaring.*/

return 0;
}