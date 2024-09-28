#include<stdio.h>

typedef union data {
	int x;
	int y;
}DATA;

int main()
{
	//union data d = {10};
	DATA d = {10};
	printf("size ois %ld\n", sizeof(d));
	d.y = 20;	
	printf("sum is %d\n", d.x+d.y);

	return 0;
}
