#include<stdio.h>

int main()
{
	int a[3] = {10, 20, 30};
	int *p = NULL;

	p = a; //Array name holds the base address

	//address of each element in the array
	printf(" P+0 = %p\n", p+0);
	printf(" P+1 = %p\n", p+1);
	printf(" P+2 = %p\n", p+2);
	//Address of each array elements
	printf(" a+0 = %p\n", a+0);
	printf(" a+1 = %p\n", a+1);
	printf(" a+2 = %p\n", a+2);

//	printf("*(a+0) = %d a[0] = %d p[0]=%d *(p+0) = %d\n", *(a+0), a[0], p[0], *(p+0));
	printf("*(a+0) = %d a[0] = %d *(0+a)=%d 0[a] = %d\n", *(a+0), a[0], *(0+a), 0[a]);
	printf("*(a+1) = %d a[1] = %d\n", *(a+1), a[1]);
	printf("*(a+2) = %d a[2] = %d\n", *(a+2), a[2]);

	return 0;
}

