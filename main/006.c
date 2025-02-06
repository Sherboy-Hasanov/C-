#include <stdio.h>
int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        printf("Eng katta son: %d\n", a);
    }
    if(b > a && b > c){
        printf ("Eng katta son: %d\n", b);
    }else{
        printf("Eng katta son: %d\n", c);
    }

//  a, b, c  sonlari berilgan.  Shu sonlardan eng kattasini toping. 

    return 0;
}