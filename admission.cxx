#include<stdio.h>
int main(){
	typedef struct{
		int studentId;
		int age;
		int marks;
	}Student;
	
	int n;
	scanf("%d",&n);
	Student s[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter the Student Id\n");
		scanf("%d",&s[i].studentId);
		printf("Enter the age\n");
		scanf("%d",&s[i].age);
		printf("Enter the marks\n");
		scanf("%d",&s[i].marks);
	}
	for(i=0;i<n;i++){
		if(s[i].age>20 && s[i].marks>=0 && s[i].marks<=100){
			if(s[i].marks>=65){
				printf("Student Id: %d\tAdmission possible and data is valid\n",s[i].studentId);
			}else{
				printf("Student Id: %d\tAdmission not possible and data is valid\n",s[i].studentId);
			}
		}else{
			printf("Student Id: %d\tData is Invalid\n",s[i].studentId);
		}
	}
	return 0;
}