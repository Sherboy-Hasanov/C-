#include <stdio.h>
int main (){

int Son;

printf("Son kiriting:\n");
scanf("%d", &Son);


if(Son > 10){
	printf("%d\n", Son + 3);
}
else if(Son < 10){
	printf("%d\n", Son * 2);
}else{
	printf("%d\n", 22);
}



// Berilgan son 10 dan katta bo'lsa unga 3 ni qo'shib konsolga chiqaring.

// Agar 10 dan kichik bo'lsa 2ga ko'paytirib natijani konsolga chiqaring.

// Agar 10 ga teng bo'lsa 22 sonini konsolga chiqaring.


	return 0;
}