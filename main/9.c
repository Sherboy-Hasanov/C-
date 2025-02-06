#include <stdio.h>
int main(){

int son;

printf("Son kriting: ");
scanf("%d", &son);

if(son % 3 == 0 && son % 4 == 0){
    printf("true\n");
}else{
    printf("false\n");
}

//  Berilgan son 3 va 4 ga bo'linadimi? Agar bo'linsa konsolga 'true'  bo'lmasa falseni chiqaring.
    return 0;
}