#include<stdio.h>
void swap(int *, int *);
int main()
{
int a = 10, b = 50;
swap(&a, &b);
printf("Inside the main :\n a = %d b = %d\n", a, b);
}
void swap(int *x, int *y)
{	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("Inside the Function:\nx = %d y = %d\n", *x, *y);
}
