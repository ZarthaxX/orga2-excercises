#include <stdio.h>

extern int suma_parametros( int a0, int a1, int a2, int a3,
							int a4, int a5 ,int a6, int a7 );

int main(){

	printf("Sum is %d",suma_parametros(10,20,3,5,14,12,29,59));

	return 0;
}
