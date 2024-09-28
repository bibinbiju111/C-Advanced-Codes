#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *p = NULL, *t;
	char input[10];
	printf("enter input\n");
	scanf("%s", input);

	p = (char *) malloc((strlen(input)+1) * sizeof(char));
	if(p == NULL) {
		printf("malloc failed\n");
		return -1;
	}
	printf("memory allocated successfully\n");
	strcpy(p, input);
	printf("Before user provided string is %s\n", p);

	*p = 'k';// Modifying the data
	printf("After user provided string is %s\n", p);
	t = p;

	p++;// Modifying the pointer
	printf("After user provided string is %s\n", p);

	//free(p);
	free(t);
	printf("memory deallocated\n");

	return 0;
}
