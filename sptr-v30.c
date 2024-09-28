/*#include<stdio.h>
#include<string.h>

int main()
{
	char *ptr = NULL;
	char str[10] = "hello";
	ptr = str;

	printf("string is %s\n", ptr);
	printf("strlen of ptr is %ld and sizeof ptr is %ld\n", strlen(ptr), sizeof(ptr));

	return 0;
}
*/
#include<stdio.h>
#include<string.h>

int main()

{

	char *str1 = "hello, world\n";

	char *str2 = "good morning\n";

	strcpy(str2, str1);

	printf("%s\n", str2);

	return 0;
}
