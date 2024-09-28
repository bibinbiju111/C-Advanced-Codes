#include<stdio.h>

//void display(int x[][3], int); //Declaration 1St notation
void display(int (*x)[3], int); //Declaration 2nd notation
int main()
{
	int arr[2][3] = {{10,20,30}, {40,50,60}};
	int rows = sizeof(arr)/sizeof(arr[0]);
	printf("Rows = %d\n", rows);

	//display(arr, rows); // 1st notation- rows unsized array
	display(arr, rows); // 2nd notation- ptr to sequential 1d arrays

	return 0;
}

//void display(int x[][3], int rows) //1st notation
void display(int (*x)[3], int rows) //2nd notation
{
	int i, j;
	int cols = 3;
	printf("array elements are::::\n");
	for(i = 0; i < rows; ++i) {
		for(j = 0; j < cols; ++j) {
			printf("x[%d][%d] = %d\t", i, j, x[i][j]);
		}
		printf("\n");
	}
}
