#include<stdio.h>

int main(){
    int n,a,arr[20],i,j;

    printf("Enter the position");
    scanf("%d",&n);

    printf("Enter the elements ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the position from which array to be separated");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        arr[4]=arr[0];
        for(j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
    }
}