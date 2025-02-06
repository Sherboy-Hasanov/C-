#include <stdio.h>

int main(){

char c;

printf("Harf kriting: ");
scanf("%c", &c);

if(c >= 'a' && c <= 'z'){
    printf("loverCase\n");
}
else if(c >= 'A' && c <= 'Z'){
    printf ("upperCase\n");
}else{
    printf("none\n");
}

// c char berilgan. Berilgan  char katta alfavit yoki kichik alfavit ekanlini aniqlang .

// Agar alfavit kichik bo'lsa 'lowerCase' so'zini konsolga chiqaring,  Agar alfavit katta bo'lsa 'upperCase' 
// ni chiqaring,  agar alfavit  bo'lmasa  'none' ni  chiqaring.



return 0;
}