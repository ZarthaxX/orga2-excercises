#include <stdio.h>

extern int sum(int,int);

int main(){
	printf( "Enter value a and b:");
	int a,b;
	scanf("%d %d",&a,&b);
	printf( "\nYou entered: %d %d ", a, b);
	printf("\nYour sum is: %d",sum(a,b));
	return 0;
}