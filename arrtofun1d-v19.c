#include<stdio.h>
#include<stdlib.h>
//void display(int x[5]); //1st notation Declaration
//void display(int x[], int); //2nd notation Declaration
void display(int *x, int); //3rd notation Declaration
int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int len = sizeof(arr)/sizeof(arr[0]);
	//1st notation - sized array
	//display(arr);	
	
	//2nd notation - unsized array
	//display(arr, len);
	//3rd notation - pointer 
	display(arr, len);
	return 0;
}

//void display(int x[5]) //1st notation
//void display(int x[], int len1) //2nd notation
void display(int *x, int len1) //3rd notation
{
	int i;
	//int len = sizeof(x)/sizeof(x[0]);
	//int len = 5; //1st notation
	int len = len1; //2nd notation
	printf("array elements are \n");
	for(i = 0; i < len; ++i) {
		printf("%d element is %d\n", i, x[i]);
	}
}
