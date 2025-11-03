#include<stdio.h>
int main()
{
    int arr[]={11,44,33,77,32,47,42};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    babble(arr,n);
    print(arr,n);
    return 0;
}
int print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d  ",arr[i]);
    printf("\n");
}
int babble(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
