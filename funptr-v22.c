#include<stdio.h>

void display()
{
	printf("inside function display\n");
}

int main()
{
	void (*fp)(); // function pointer definition
	//fp type is return type as void and no arguments
	
	//assign the address of same type of function to fp
	//fp = &display; //note than just give function name without any paranthesis
	fp = display; //& Removed

	display();//normal function call

	fp(); // using function pointer

	(*fp)(); //calling function using function pointer fp

	return 0;
}
