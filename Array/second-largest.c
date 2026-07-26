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

    int largest= arr[0];
    int second_largest= arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }

        else if(arr[i]>second_largest && largest!=arr[i]){
            second_largest=arr[i];
        }
    }

    if(second_largest==largest){
        printf("No Second Largest Element");
    }

    else{
        printf("Largest Element is %d\n",largest);
        printf("Second Laargest Element is %d\n",second_largest);
    }


    
    return 0;
}