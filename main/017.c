#include <stdio.h>

int main() {
    int a, b, c;
    int count = 0; // Musbat sonlarni sanash uchun o'zgaruvchi

    printf("Uchta sonni kiriting (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0) {
     count++;
    }
    if (b > 0) {
     count++;
    }
    if (c > 0) {
     count++;
    }

    printf("Musbat sonlar soni: %d\n", count);

//  a, b, c sonlari berilgan.

// Berilgan 3 ta sondan nechtasi musbat ekanligini aniqlovchi dastur yozing va musbat sonlar sonini konsolga chiqaring.

    return 0;
}