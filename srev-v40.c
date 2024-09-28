#include<stdio.h>
#include<string.h>
void rev(char s[])
{
	int i, j;
	int temp = -1;
	for(i=0, j=strlen(s)-1; i<j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;	
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
