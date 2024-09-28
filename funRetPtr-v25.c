#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *p = NULL;

char *creatMemory(int len)
{
	p = (char *) malloc(len*sizeof(char));
	if(p == NULL) {
		printf("Erroor in memory allocation\n");
		return NULL;
	}
	printf("Memory allocated and returning\n");
	return p;
}

int main()
{
	//int a=2, b=3;
	char input[30];
	char *lp = NULL;

	printf("enter input\n");
	scanf("%s", input); 

	lp = creatMemory(strlen(input)+1);
	if(lp == NULL) {
		printf("Unable to allocate memory\n");
		return -1;
	}
	printf("memory allocated. copying the data\n");
	strcpy(lp, input);
	printf("Data in Dyn allocated mem is %s\n", lp);
	free(lp);
	return 0;

}
