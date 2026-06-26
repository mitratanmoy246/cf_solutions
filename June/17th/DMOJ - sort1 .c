#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>

void swap(int arr[],int j){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}

void traverse(int arr[],int lb,int up){
    for(int i=lb;i<up;i++) printf("%d ", arr[i]);
}

void solve()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    traverse(arr,0,n); printf("\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j);
                traverse(arr,0,n); printf("\n");
            }
        }
    }
}

int main()
{
    int t=1;
    // scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}