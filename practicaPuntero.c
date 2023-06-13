

#include <stdio.h>

char * donde (char *p, char c){
    for(; *p != 0; p++){
        if(*p == c){
            return p;
        }
    }
    return NULL;
}

//modificacion de una variable local mediante una funcion externa
//solo se puede hacer mediante punteros
void f2(int *h){
    *h=0;
}
int f1(){
    int j,k, *p;
    *p= 25;
    printf("value of p before: %d\n", *p);
    p= &j; //dirrecion de memoria de la variable j
    f2(p);
    f2(&k);
    printf("value of p after: %d", *p);
    
}

int cadena_lentgh(char *p){
    int length=0;
    for(; *p != 0; p++){
        length++;
    }
    return length;
}
char * sub_string(char *s, char *sub){
    
    int i=0;
    
    while(*s != 0 && *sub != 0){
        if(*s == *sub){
            i++;
            sub+=i;
        }else{
            if(i != 0){
                sub-=i;
                i=0;    
            }
        }
        s++;
    }
    if(*sub == 0)
        s-= i;
        return s;

    return "nose encuentra";
}
main(){
    /*
    char *cadena= "buscando exactamenete esto";
    char *s;
    s= donde (cadena, 'e');
    if(s != NULL){
        printf(" %s \n", s);
    }
    */
   //f1();
   /*
   char *a;
   printf("%d \n",a);
 
    */
   /*
    char *s= "ABCDEFG";
    printf("%s \n", s+6);
    printf ("Longitud de la cadena s: %d", cadena_lentgh(s));
    */

   char *cadenaA= "leonel", *cadenaB= "nel"; 
   
   printf("Esta cadenaB en cadenaA : %s", sub_string(cadenaA, cadenaB) );

}