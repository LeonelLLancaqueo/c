#include <stdio.h>
#include <stdlib.h> // system ("/bin/stty raw");
#include <string.h>
int main(){
/*	char a= 'a';
	unsigned char b= 'g';
	printf("char a: %i ", sizeof(a));
	printf("unsigned char b: %i", sizeof(b));
	return 0;
*/


/*
	float a,b;
	float r;
	a= 5;
	b=2;
	r= a/b;
	printf("variable r: %f", r);

*/

/*
	printf("%d\n",20/3);
	printf("%f\n",20/3);
	printf("%f\n",20/3.);
	printf("%d\n",10%3);
	printf("%d\n",3.1416);
	printf("%f\n",(double)20/3);
	printf("%f\n",(int)3.1416);
	printf("%d\n",(int)3.1416);
*/
		

/*	
	printf("resultado %i\n",(100000*100000));
*/
	


	int c;
	int intentos=0;
	int int_acert=0;
	char palabra[3];
	char *pal= "leo";
	int pal_leng= strlen(pal);
	/* Decirle al sistema que el modo input es RAW */
	system ("/bin/stty raw");

	while(1) {
		printf("\r                                                              " );
		printf("\r c = %c  ingrese una letra (0 para salir): %s",c,palabra);
		
		c = getchar();
		
		for(int i=0; i< pal_leng; i++ ){
			if((char)c == pal[i]){
			palabra[i]= (char)c;
			int_acert++;
			}
		
		}
		
		intentos++;
		if ( int_acert == pal_leng){
			printf("\n %s  win!!\n", palabra);
				break;
		}
		if(intentos >= 5){
			printf("\n perdiste\n");
			c= 0;
			break;
		}
		
	}

	system ("/bin/stty sane erase ^H");


	system ("/bin/stty raw");
}
