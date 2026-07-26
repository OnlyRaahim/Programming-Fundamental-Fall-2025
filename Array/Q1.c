#include<stdio.h>

int main(){
    
    int n;
    printf("Enter Elements: ");
    scanf("%d ",&n);

    int array[n];
    for(int i=0; i<n; i++ ){
        scanf("%d",&array[i]);
    }

    for(int i=0; i<n; i++ ){
        printf("%d\n",array[i]);
    }

    return 0;
}