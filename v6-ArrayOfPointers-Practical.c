#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *a[3];//array of pointers
	char input[20]; // temporary storage for inputted strings
	int in_len = -1, i, j;
	int len = sizeof(a)/sizeof(a[0]); // number of elements of array

	for(i = 0; i < len; ++i) {
		printf("enter the input\n");
	        scanf("%s", input);

	        in_len = strlen(input);

        	a[i] = (char *) malloc((in_len+1)* sizeof(char));
	        if(a[i] == NULL) {	
        	        printf("malloc failed for a[%d]\n", i);
			for(j = i-1; j>=0; --j) {
				printf("freeing memory for a[%d]\n", j);
				free(a[j]);
			}
                	return -1;
        	}
	        printf("memory allocated for a[%d] \n", i);
	        strcpy(a[i], input);
	        printf("inputted data for a[%d] from heap is %s\n", i, a[i]);
	}
	
	for(j = len-1; j>=0; --j) {
		printf("freeing memory for a[%d]\n", j);
		free(a[j]);
	}



	/*printf("enter the input\n");
	scanf("%s", input);

	in_len = strlen(input);

	a[0] = (char *) malloc((in_len+1)* sizeof(char));
	if(a[0] == NULL) {
		printf("malloc failed\n");
		return -1;
	}
	printf("memory allocated for a[0]\n");
	strcpy(a[0], input);
	printf("inputted dat from heap is %s\n", a[0]);

	printf("enter the input\n");
        scanf("%s", input);

        in_len = strlen(input);

        a[1] = (char *) malloc((in_len+1)* sizeof(char));
        if(a[1] == NULL) {
                printf("malloc failed\n");
		free(a[0]); // free the previously allocated memory. otherwise MemoryLEak
                return -1;
        }
        printf("memory allocated for a[1]\n");
        strcpy(a[1], input);
        printf("inputted dat from heap is %s\n", a[1]);

	free(a[1]);
	free(a[0]);
*/

	return 0;
}
