#include<stdio.h>

struct data {
	int x;
	char ch;
};
//}__attribute__((packed));

int main()
{
//	struct data d;
//	printf("size = %ld\n", sizeof(d));	
	struct data d[3];
/*	d[0].x =10;
	d[0].ch = 'A';
	d[1].x =10;
	d[1].ch = 'A';
	d[2].x =10;
	d[2].ch = 'A';
	*/
	int i;
	int len = sizeof(d)/sizeof(d[0]);
	for(i = 0; i < len; ++i) {
		d[i].x = i+10;
		d[i].ch = 'A';
	}
	for(i = 0; i < len; ++i) {
		printf("d[%d].x = %d d[%d].ch = %c\n", i, d[i].x,i, d[i].ch);
	}

	return 0;
}
