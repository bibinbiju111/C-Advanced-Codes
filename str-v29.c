#include<stdio.h>
#include<string.h>

int main()
{
	//sized array representation of strings
	//char str[10] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	//char str[10] = "hello";	

	//Unsized Array Representation
	//char str[] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	char str[] = "hello";
	printf("string is %s\n", str);
	
	printf("strlen is %ld sizeof is %ld\n", strlen(str), sizeof(str));

	return 0;
}
