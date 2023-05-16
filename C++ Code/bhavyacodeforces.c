#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count=0;    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]=arr[j] && i!=j){
                count++;
                break;
            }
        }
    }
    if(count==n){
        printf("%d ", arr[n-1]);
        for(int i=0; i<n-1; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else{
        printf("-1");
    }
    return 0;
}