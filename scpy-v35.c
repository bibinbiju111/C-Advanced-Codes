#include<stdio.h>

//Array Notation
/*char *scpy(char dest[10], char src[10])
{
	int i;
//	for(i=0; dest[i] = src[i] ; ++i) {
//		if(dest[i] == '\0')
//			break;
//	}
	for(i=0; (dest[i]=src[i]) != '\0'; ++i)
		;

	if(dest[i] == '\0')
		return dest;
	else
		return NULL;
}*/

//pointer notation
char *scpy(char *dest, char *src)
{
	char *start = dest;

	/*for(; *dest = *src; dest++, src++) {
		if(*dest == '\0')
			break;
	}*/
	/*for(; (*dest = *src) != '\0'; dest++, src++)
		;
	*/

	for(; (*dest++ = *src++) != '\0';)
		;

	if(*--dest == '\0')
		return start;
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
