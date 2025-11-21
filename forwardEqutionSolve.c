#include<stdio.h>
 int fact(int x)
    {
        int f=1;
        for(int i=2;i<=x;i++)
            f=f*i;
            return f;
    }
int main()
{
    int n,i,j;
    float x[20],y[20][20];
    printf("Enter size=");
    scanf("%d",&n);
     printf("Enter x value=");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
     printf("Enter y value=");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i][0]);
    }
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    printf("forward table=");
    for(i=0;i<n;i++)
    {
        printf("%f\t",x[i]);
        for(j=0;j<n-i;j++)
        {
        printf("%f\t",y[i][j]);
        }
 printf("\n");
    }

    float xp;
    printf("Enter value xp=\n");
    scanf("%f",&xp);
    float h=x[1]-x[0];
    float u=(xp-x[0])/h;
     float yp=y[0][0];
    float term=1;
    for(i=1;i<n;i++)
    {
        term=term*(u-i+1);
        yp=yp+(term*y[0][i])/fact(i);
    }
    printf("\ninterpolated value at xp=%f is %f\n",xp,yp);

    return 0;
}
