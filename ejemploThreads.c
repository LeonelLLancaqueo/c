#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *p_msg(void *ptr);

main(){
    pthread_t thread1, thread2;
    
    char *msg1 = "Thread 1 ";
    char *msg2 = "Thread 2 ";

    int r1, r2;

    r1= pthread_create(&thread1, NULL, p_msg, (void*)msg1);
    r2= pthread_create(&thread2, NULL, p_msg, (void*)msg2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Thread 1 returns: %d", r1);
    printf("Thread 2 returns: %d", r2);
    
    exit(0);
}
void *p_msg(void *ptr){
    char *m;
    m= (char * )ptr;
    printf("%s \n", m);
}