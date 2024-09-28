#include<stdio.h>

struct data {
	int x;
	char ch;
};

int main()
{
	struct data d = {10, 'A'};
	struct data *p = NULL;
	p = &d;

	printf("x = %d ch = %c\n", d.x, d.ch);
	printf("x = %d ch = %c\n", (*p).x, (*p).ch);
	printf("x = %d ch = %c\n", p->x, p->ch);
	return 0;
}
