#include<stdio.h>
void print(int arr[],int size);
void babble(int arr[],int size);
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    }
    
    print(arr,n);
    babble(arr,n);
    print(arr,n);
    return 0;
}
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d  ",arr[i]);
    printf("\n");
}
void babble(int arr[],int size)
{
    int i,j,n;
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
