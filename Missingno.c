#include <stdio.h>
 
int getMissingNo(int a[], int n)
{
    int i, total,sum=0;
    sum = (n+1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
        total=total+ a[i];
    return sum-total;
}
 
int  main()
{
    int arr[] = { 1, 2, 3, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, N);
    printf("%d", miss);
}