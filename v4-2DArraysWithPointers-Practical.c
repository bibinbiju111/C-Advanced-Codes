#include<stdio.h>

int main()
{
	int a[2][3] = {{10, 20, 30}, {40,50,60}};

	//a or a+0
	printf("a or a+0 = %p\n", a+0);
	// *(a+0) or *(a+0)+0
	printf("*(a+0) = %p *(a+0)+0 = %p\n", *(a+0), *(a+0)+0);
	//*(a+0)+1
	printf("*(a+0)+1 = %p\n", *(a+0)+1);
	//*(*(a+0)+1)
	printf("*(*(a+0)+1) = %d\n", *(*(a+0)+1));

	//a+1
	printf("a+1 = %p\n", a+1);
	// 50 - a[1][1]
	printf("*(*(a+1)+1) = %d\n", *(*(a+1)+1));

	return 0;
}
