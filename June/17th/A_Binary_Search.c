#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>

int binarySearch(int arr[],int x,int lb,int up){
    while(lb<=up){
        int mid=lb+(up-lb)/2;

        if(x>arr[mid]) lb=mid+1;
        else if(x<arr[mid]) up=mid-1;
        else if(x==arr[mid]) return mid;
    }
    return -1;
}

void solve()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while(k--){
        int x;
        scanf("%d", &x);
        if(binarySearch(arr,x,0,n-1)>=0) printf("YES\n");
        else printf("NO\n");
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