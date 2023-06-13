#include <stdio.h>

int main(){
    
    char i;
    int  j;
	
    printf("tamanio de tipo char i: %i", sizeof(i));
    printf("tamanio de tipo int: %i", sizeof(j));
	printf("tamanio de tipo void: %i", sizeof(void));
	printf("tamanio de tipo double: %i", sizeof(double));

    return 0;
}