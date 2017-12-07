#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_detail
{
	char name[20];
	unsigned int year;
	char gender;
}student_record;

int main()
{
	student_record *example = (student_record*)malloc(5*sizeof(student_record));
	student_record st;
	//student_record *pst = example+1; This is also fine
	student_record *pst = &st;


	//scanf("%s",example[1].name); 	
	strcpy(example[1].name, "hi");
	example[1].year = 2010;
	printf("%d\n",example[1].year); //example[1] == *(example+1)
	printf("%s\n",example[1].name);

	
	st.year = 2020;
	//printf("%d\n",pst.year); Thats wrong
	printf("%d\n",pst->year);
	//printf("%d\n",*pst.year); Thats wrong
	printf("%d\n",(*pst).year);

	return 0;
}
