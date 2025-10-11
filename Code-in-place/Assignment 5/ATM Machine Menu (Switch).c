#include<stdio.h>
int main ()
{
	int choice;
	float balance=1000.0 ,amount; 
	
	printf("ATM Machine Menu\n");
	printf("1. withdraw\n");
	printf("2. deposit\n");
	printf("3. Check balance\n");
	printf("4. exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch (choice){
	case 1:
	 	printf("Enter withdrawl amount:");
	    scanf("%f",&amount);
	    if (amount>balance)
	    {
	    printf("insufficient balance");}
	    else {
	    balance -= amount;
	    printf("Withdrawl successful. Remaining balance is: %.2f",balance);}
	    break;
	

	case 2:
		printf("Enter deposit amount:");
		scanf("%f",&amount);
		balance +=amount;
		printf("Deposit successful. New balance is: %.2f",balance);
		break;
		
	case 3:
		printf("your current balance is %.2f",balance);
		break;
		
	case 4:
		printf("exiting....");
		break;
		
	default:
		printf("Invalid choice");
		
	}
	return 0;
	
	}
	

