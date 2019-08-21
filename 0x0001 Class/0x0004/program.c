#include <stdio.h>

extern int imprime_parametros(int a, float b,char* s);

int main()
{
	imprime_parametros(4, 342.6, "Hello guys\n");
	return 0;
}
