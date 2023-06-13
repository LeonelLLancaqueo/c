#include <stdio.h>

struct persona{
	long dni;
	char nombre[40];
	int edad;
};

struct cliente {
	int num_cliente;
	struct persona p;
	double saldo;
};

struct cliente c1, c2;
void main(){
c1.num_cliente = 1001;
c1.p.dni = 43684498;
c1.p.edad =40;

c2= c1;
struct persona p1= {17695247, "Juan Perez", 30};
c2.p= p1;

printf("nombre de p1:%c dni: %i",c1.p.nombre, c1.p.dni );

	return 0;
}
