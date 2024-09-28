#include<stdio.h>
#include<stdlib.h>

struct data {
	int x;
	char ch;
};

int main()
{
	struct data *p = NULL;
	p = (struct data *)malloc(1*sizeof(struct data));
	if(p == NULL) {
		printf("dyn mem alloc failed\n");
		return -1;
	}	

	printf("memory allocated\n");

	p->x = 10;
	p->ch = 'A';

	printf("%d %c\n", p->x, p->ch);
	
	free(p);
	printf("memory freed\n");

	return 0;
}
