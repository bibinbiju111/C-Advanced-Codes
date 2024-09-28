#include<stdio.h>
#include<string.h>
void rev(char s[])
{
	char *p1, *p2;
	char temp;
	p1 = s;
	//p2 = s + strlen(s) - 1;
	p2 = &s[strlen(s)-1];
	
	for(; p1<p2; p1++, p2--) {
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}


int main()
{
	char str[10] = "hello";
	printf("Before reverse str= %s\n", str);
	rev(str);
	printf("After reverse str= %s\n", str);
	return 0;
}
