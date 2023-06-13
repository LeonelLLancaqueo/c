
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    const int SIZE = 4096;

        const char *name = "linux";

        int shm_fd;
        void *ptr;

        /*create a shared memory segment*/
        shm_fd= shm_open(name, O_RDWR, 0666);
        /*configure the size shared memory segment*/

        ftruncate(shm_fd, SIZE);

        /*now map the shared memory segment in
        the address space of the process*/

        ptr=mmap(0, SIZE, PROT_READ, MAP_SHARED, shm_fd, 0 );

        if(ptr == MAP_FAILED){
            printf("Map failed\n");
            return -1;
        }
        //leemos el archivo
        

        printf("%s",(char*)ptr);
        if(shm_unlink(name) == -1){
            printf("Error removing %s \n", name);
            exit(-1);
        }
}