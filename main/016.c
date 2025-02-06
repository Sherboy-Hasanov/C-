#include <stdio.h>

int main() {
    int a, b, c;

    printf("Uchta tomon uzunligini kiriting (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Uchburchak shartini tekshirish: har bir ikki tomon yig'indisi uchinchi tomondan katta bo'lishi kerak
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("equilateral\n"); // Teng tomonli
        } else if (a == b || a == c || b == c) {
            printf("isosceles\n"); // Teng yonli
        } else {
            printf("scalene\n"); // Ixtiyoriy
        }
    } else {
        printf("Bu uchburchak bo'la olmaydi\n");
    }

    


/*a,b,c sonlari berilgan. Bu sonlar uchburchakning 3ta tomonidir.  Uchburchak ning shakli qanday ekanligini aniqlang.

Agar teng tomonli bo'lsa  'equilateral' so'zini konsolga chiqaring.
Agar teng yonli bo'lsa  'isosceles' so'zini konsolga chiqaring.
Agar ixtiyoriy  bo'lsa  'scalene'  so'zini konsolga chiqaring.*/

    return 0;
}