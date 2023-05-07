#include<stdio.h>

int main()
{
	int x=5;
	int *a =&x;

	printf("%d\n",&x );
	printf("%d",a );
    printf("\n%d",*a);
	return 0;
}