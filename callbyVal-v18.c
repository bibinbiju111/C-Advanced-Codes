#include<stdio.h>

void swap(int, int);
int main()
{
	int a = 2, b = 3;
	
	printf("MAIN:: before swap a= %d b = %d\n", a, b);
	swap(a, b); //Call by Value
	printf("MAIN:: After swap a= %d b = %d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;
	printf("SWAP::: Before swap x=%d y=%d\n", x, y);
	temp = x;
	x=y;
	y=temp;
	printf("SWAP::: After swap x=%d y=%d\n", x, y);

}
