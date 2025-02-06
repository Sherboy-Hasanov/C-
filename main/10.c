#include <stdio.h>

int main(){

int yil;

printf("Qaysi yil kabisa yili ekanligini aniqlang:");

scanf("%d", &yil);

if (yil % 4 == 0){
    printf("true\n");
}else{
    printf("false\n");
}

// Berilgan yill kabisa yili ekanligini aniqlang. Agar kabisa yili bo'lsa true  konsolga chiqsin.  Agar bo'linmasa false  konsolga chiqsin.

// Kabisa yil deb 4 yilda birmarta keladigan yilga aytiladi. Shu yili kunlar soni 365 emas 366 ga teng bo'ladi. Bu yili fevral oyida 29 kun bo'ladi.

    return 0;
}