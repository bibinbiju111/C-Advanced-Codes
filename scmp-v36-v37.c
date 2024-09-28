#include<stdio.h>

/*int scmp(char s[10], char t[10])
{
	int i;
	for(i = 0; s[i] == t[i]; ++i) {
		if(s[i] == '\0')
			break;
	}

	if(s[i] == '\0' && t[i] == '\0') //verifying both strings are at end of strings
		return 0;
	else // UNmatched strings. Returning ascii difference of unmatched chars
		return (s[i]-t[i]);

}*/

//Pointer Notation
int scmp(char *s, char *t) 
{
	for(; *s == *t; s++, t++)
		if(*s == '\0')
			break;
	if(*s == '\0' && *t == '\0')
		return 0;
	else
		return (*s-*t);

}


int main()
{
	char s1[10] = "hello";
	char s2[10] = "hellk";
	int res = -1;

	res = scmp(s1, s2);

	if(res == 0)
		printf("Strings matched %d\n", res);
	else
		printf("Strings are not same %d\n", res);


	return 0;
}
