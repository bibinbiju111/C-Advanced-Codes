#include<stdio.h>

char *scpy(char dest[10], char src[10])
{
	int i;
/*	for(i=0; dest[i] = src[i] ; ++i) {
		if(dest[i] == '\0')
			break;
	}*/
	for(i=0; (dest[i]=src[i]) != '\0'; ++i)
		;

	if(dest[i] == '\0')
		return dest;
	else
		return NULL;
}

int main()
{
	char src[10] = "hello";
	char dest[10]; 
	char *ret = NULL;

	ret = scpy(dest, src);

	printf("dest string is %s \n", ret);
	return 0;
}
