#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>

void selSort(int a[],int n,int i){
    if(i==n) return;
    int m=i;
    for(int j=i+1;j<n;j++) if(a[j]<a[m]) m=j;
    int t=a[i]; a[i]=a[m];a[m]=t;
    selSort(a,n,i+1);
}

void solve()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    selSort(arr,n,0);
    int k;
    scanf("%d", &k);
    while(k--){
        int  l,r;
        scanf("%d %d", &l,&r);
        
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