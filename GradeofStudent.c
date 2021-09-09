//Program to find grade of student
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks of the student: ");
	scanf("%d",&marks);
	if(marks>85)//maximum marks that can be obtained is 100
	printf("Grade A is obtained");
	else if(marks>70&&marks<84)
	printf("Grade B is obtained");
	else if(marks>55&&marks<69)
	printf("Grade C is obtained");
	else if(marks>40&&marks<54)
	printf("Grade D is obtained");
	else printf("Grade F is obtained");//for marks less than 40
}
