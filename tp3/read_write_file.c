#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>


int main(){
    const int SIZE = 4096;

        //we keep the file's descriptor in "file"    
        int file =open("/home/leonel/Escritorio/Tercer Año/Sistemas Operativos I/prueba.txt",O_RDWR);

        const char *name = "linux";

        int shm_fd;
        void *ptr;

        /*create a shared memory segment*/
        shm_fd= shm_open(name, O_CREAT | O_RDWR, 0666);
        /*configure the size shared memory segment*/

        ftruncate(shm_fd, SIZE);

        /*now map the shared memory segment in
        the address space of the process*/

        ptr=mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0 );

        if(ptr == MAP_FAILED){
            printf("Map failed\n");
            return -1;
        }


        //read the file
        read(file, ptr, SIZE);

        //printf("%s",(char*)ptr);    


}


    
    /*Now wriwritete to the shared memory region*/
    /*
    sprintf(ptr, "%s ", mess0);
    ptr+= strlen(mess0);
    sprintf(ptr, "%s ", mess1);
    */
    /*Now wriwritete to the shared memory region*/
    /*
    sprintf(ptr, "%s ", mess0);
    ptr+= strlen(mess0);
    sprintf(ptr, "%s ", mess1);
    */