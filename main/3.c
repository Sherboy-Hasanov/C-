#include <stdio.h>
int main(){
int a, b;

printf("a sonini kiriting:");
scanf("%d", &a);

if(a % 3){
    b = a % 3;
    printf("%d\n", b);
}
return 0;
}