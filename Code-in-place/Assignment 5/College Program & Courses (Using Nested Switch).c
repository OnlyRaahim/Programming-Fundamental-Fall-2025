#include<stdio.h>
int main ()
{
	int program,year;
		
	printf("1. Computer Science:\n");
	printf("2. Electrical Engineering:\n");
	printf("Enter your program:");
	scanf("%d",&program);
	
	switch (program) {
	
	case 1:
	printf("Computer Science\n");
	printf("1.First Year\n");
	printf("2.Second Year\n");
	printf("Enter your year:");
	scanf("%d",&year);
	
	switch (year){
	 case 1:
		printf("First Year\n");
		printf("Your courses is:\n");
		printf("1. Programming Fundamentals\n");
		printf("2. Fucntional English\n");
		printf("3. Maths\n");
		printf("4. Islamiat\n");
		printf("5. ICP\n");
		printf("6. Applied Physics\n");
		printf("7. IT & Fundamentals");
		break;
		
	 case 2:
		
		printf("Second Year\n");
		printf("Your courses is:\n");
		printf("1. Data Structures \n");
		printf("2. Fucntional English\n");
		printf("3. PST\n");
		printf("4. Islamiat\n");
		printf("5. ICP\n");
		break;
		default:
			printf("Invalid year choice");}

	break;
	
		case 2:
	    printf("Electrical Engineering\n");
	    printf("1.First Year\n");
	    printf("2.Second Year\n");
	    printf("Enter your year:");
	    scanf("%d",&year);
	    
	    switch (year){
	 case 1:
		printf("First Year\n");
		printf("Your courses is:\n");
		printf("1. Basic Electrical Engineering\n");
		printf("2. Engineering Mathematics-I\n");
		printf("3. Engineering Physics\n");
		printf("4. Engineering Drawing\n");
		printf("5. Computer programming\n");
		break;
		
	 case 2:
		
		printf("Second Year\n");
		printf("Your courses is:\n");
		printf("1. Electrical Circuit Analysis\n");
		printf("2. Electronic devices & Circuit\n");
		printf("3. Electrical Machines\n");
		printf("4. Digital Logic Design\n");
		printf("5. Signal & Systems\n");
		break;
		default:
			printf("Invalid year choice");}
	
	break;
	default:
		printf("Invalid program choice.\n");
		
			
	}
		
	return 0;
}
