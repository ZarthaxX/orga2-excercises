#include <stdio.h>
#include <math.h>

extern int* primerMaximo(int** matriz, int* f, int* c);
int main(){
	int f = 2;
	int c = 3;
	int m[f][c];

	for(int y = 0;y < f;y++){
		for(int x = 0;x < c;x++){
			m[y][x] = -1;
		}
	}

	m[0][0] = 10;
	m[f-1][c-1] = 1;
	for(int y = 0;y < f;y++){
			for(int x = 0;x < c;x++){
			
			    printf("%d ",m[y][x]);
			    fflush( stdout );
			}
			printf("");
		}
	printf("Best is %d",*primerMaximo(m,&f,&c));

	return 0;
}
