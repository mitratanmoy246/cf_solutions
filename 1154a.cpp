#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,w;
    int a,b,c;
    cin>>x>>y>>z>>w;
    int arr[4]={x,y,z,w};
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    x=arr[0];
    y=arr[1];
    z=arr[2];
    w=arr[3];
    a=((x+y+z)/2)-y;
    b=((x+y+z)/2)-z;
    c=((x+y+z)/2)-x;
    cout<<a<<" "<<b<<" "<<c<<endl;
}