
/* Ejemplo de dos threads en Linux. Compilar con: gcc -o p p.c -lpthread */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX 500000

int total = 0;
 int encontrar_primos(int from, int to)
 {
 	int totalFuncion;
         int i, n, primo;
         printf( "\n   " );

          for ( i = from ; i <= to ; i++ ) {
                  primo = 1;
                  n = 2;

                   while ( n <= i / 2 && primo ) {
                           if ( i % n == 0 )
                                   primo = 0;

			n++;
                   }
                   
                   
                   
                   
                   
		
                   if ( primo ){
                        totalFuncion++;
          					
          		}
          	printf( "%d \n", i );
          	
          }
          return totalFuncion;
 }

 
void *thread(void * i)
{
        int n = *((int *) i);

        if (n == 0) {
                printf("Este es el thread nro: %i \n", n);
                total += encontrar_primos(1,MAX/2);
        } else {
                printf("Este es el thread nro: %i \n", n);
        	total += encontrar_primos(MAX/2, MAX);
        }
}


int main()
{
        int i0=0;
        int i1=1;
        pthread_t tid[2];

        /* Create independent threads each of which will execute function */
        pthread_create( &tid[0], NULL, thread, (void *) &i0);
        pthread_create( &tid[1], NULL, thread, (void *) &i1);

        /* Wait till threads are complete before main continues.   */
        for (int i = 0; i < 2; i++)
                pthread_join(tid[i], NULL);

        printf("Total : %i \n", total);

        return 0;
}



