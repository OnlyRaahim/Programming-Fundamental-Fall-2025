#include<stdio.h>
int main()
{
	double sum=1.0;
	int d=4;
	while(d<=400){
		sum= sum+1.0/d;
		d=d+4;
	}
	printf("sum = %f",sum);
	return 0;
}
