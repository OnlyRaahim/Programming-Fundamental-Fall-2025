#include<stdio.h>

int main (){
    int n;
    printf("Enter Size Of An Array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d Element: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int min= arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Minimum Element is %d",min);
    return 0;
}