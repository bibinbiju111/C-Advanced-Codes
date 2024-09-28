#include<stdio.h>
//Array Notation
/*int slen(char s[10])
{
	int i =0 , count = 0;

	for(i=0; s[i] != '\0'; ++i) {
		count++;
	}
	return count;
}*/
//Pointer Notation
int slen(char *s)
{
	int count = 0;

	for(; *s != '\0'; ++s) {
		count++;
	}
	return count;
}

int main()
{
	char str[10] = "hello";
	int len;
	len = slen(str);
	printf("len of %s is %d\n", str, len);
	return 0;
}
