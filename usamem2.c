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
    for(i=0; j<N; i++){
        for(j=0; j<BSIZE; j++){
            *(pp+i*BSIZE+j)=2; // pp[i][j] = 2
        }
    }

    for(j=0; j<BSIZE; j++){
        for(i=0; i<N; i++){
            if(*(pp+i*BSIZE+j)!=2){ // pp[i][j] = 2
                printf("ERROR \n");
                exit(1);
            } 
        }
    }
    printf("direccion de i: %p, direccion de j: %p",&i, &j);

    return ("OK \n");
}