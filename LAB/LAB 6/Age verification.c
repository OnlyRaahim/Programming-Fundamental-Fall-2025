#include<stdio.h>
int main(){
	int age; 
	int hasId;
printf("Enter you age: ");
scanf ("%d", &age);
printf("Do you have a valid id? (1 for yes, 0 for no): ");
 scanf ("%d", &hasId);
if (age>=18 && hasId==1){
printf("you are eligible for voting");
}
else if (age>=18 && hasId==0){
printf("you meet the age requirement but cannot vote without a valid ID");
}
else
printf ("you are not eligible for voting"); return 0;
}
