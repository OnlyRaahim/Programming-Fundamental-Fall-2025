#include<stdio.h>

int main(){
    
    int n,sum=0;
    float average=0;

    printf("How many Courses offered to you:");
    scanf("%d", &n);
    
    int marks[n];

    for(int i=0; i<n; i++ ){
        printf("Enter Marks of subject %d:",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i=0; i<n; i++ ){
        sum+=marks[i];
    }

    average=(float)sum/n;

    printf("Total Marks is %d\n",sum);
    printf("Average is %.2f\n", average);

    return 0;
}