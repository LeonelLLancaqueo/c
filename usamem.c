#include <stdio.h>
#include <stdlib.h>

#define N 24000
#define BSIZE 4096
#define SMALL 4

char *pp;

main(){
    int i, j ,k;
    pp= malloc(N*BSIZE);
    if(pp == NULL){
        printf("Error al reservar memoria. \n");
        exit(1);
    }
    /* RECORREMOS Y MODIFICAMOS TODO EL SEGEMENTO SOLICITADO*/
    for(i=0; i<BSIZE; i++){
        for(i=0; i<N; j++){
            *(pp+i*BSIZE+j)=2; // pp[i][j] = 2
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<BSIZE; j++){
            if(*(pp+i*BSIZE+j)!=2){ // pp[i][j] = 2
                printf("ERROR \n");
                exit(1);
            } 
        }
    }
    printf("direccion de i: %p, direccion de j: %p direccion main: %p",&i, &j, main);

    return ("OK \n");
}