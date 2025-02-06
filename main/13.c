#include <stdio.h>

int main() {
    int day;

    printf("Hafta kunining raqamini kiriting (1-7): ");
    scanf("%d", &day);

    if (day == 1) {
        printf("Dushanba\n");
    } else if (day == 2) {
        printf("Seshanba\n");
    } else if (day == 3) {
        printf("Chorshanba\n");
    } else if (day == 4) {
        printf("Payshanba\n");
    } else if (day == 5) {
        printf("Juma\n");
    } else if (day == 6) {
        printf("Shanba\n");
    } else if (day == 7) {
        printf("Yakshanba\n");
    } else {
        printf("none\n");
    }

    

/* Berilgan son hafta kunining qaysi kuniga to'g'ri keladi .
Agar kelgan son 1 ga teng bo'lsa 'Dushanba' ni konsolga chiqaring, 
Agar kegan son ikkiga teng bo'lsa  'Seshanba' ni konsolga chiqaring va hz .., 
Agar hafta kuniga to'g'ri kelmasa 'none' konsolga chiqsin. */

    return 0;
}