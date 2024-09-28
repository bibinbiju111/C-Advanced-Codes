#include<stdio.h>
//new data type
typedef struct student {
	int rollno;   //4
	char name[20];//20
	float marks ; //4
}STUDENT;		//28

int main()
{
	//struct student s1; //s1 is variable for new datatype struct student
	STUDENT s1 = {101,"updegree", 98.53}; //s1 is variable for new datatype struct student

	printf("size = %ld\n", sizeof(s1));
	printf("roll: %d name:%s marks:%f\n", s1.rollno, s1.name, s1.marks);


	return 0;
}
