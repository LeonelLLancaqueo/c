
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/stat.h>        /* For mode constants */
#include <fcntl.h>   



const char *filename="/home/leonel/Escritorio/Tercer Año/Sistemas Operativos I/prueba.txt";
    
main (){

    char *p;
    struct stat sb;
    stat(filename, &sb);
    if(stat(filename, &sb) == -1){
        perror("stat");
        exit(EXIT_FAILURE);
    }

    unsigned int n= sb.st_size;
        
    p= malloc(n);
    
    if(p == NULL){
        printf("Error malloc \n");
        exit(1);
    } 
    
    int file =open(filename,O_RDWR);
    
    p+=n;

    while(read(file, p, 1) != 0){     
        p--;
    }
    for(int i=0; i<= n; i++){
        printf("%c", p[i]);
    }
    close(file);
    free(p);   
    
}






