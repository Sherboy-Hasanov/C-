#include <stdio.h>

int main(){

char c;

printf("Belgi kriting: ");
scanf("%c", &c);

if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z')){
    printf("alpha\n");
}
else if(c >= '0' && c <= '9') 
{
    printf("son\n");
}else{
    printf("Nomalum belgi.\n");
}


// c char berilgan. Berilgan  char alfavit  yoki raqam ekanligini aniqlang. Agar alfavit bo'lsa 'alpha' ni  konsolga chiqaring,  agar son bo'lsa 'son' ni  konsolga chiqaring.

    return 0;
}