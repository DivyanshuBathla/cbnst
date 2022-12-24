#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter the number of terms=");
    scanf("%d",&n);
    float arr[n][n+1];
    printf("\nEnter the value of x");
    for(int i=0;i<n;i++)
    scanf("%f",&arr[i][0]);
    //printf("\nEnter the value of y");
    for(int i=0;i<n;i++)
    scanf("%f",&arr[i][1]);
    printf("\nEnter the value of x for which you want y=");
    float x,y;
    scanf("%f",&x);
    for(int i=2;i<n+1;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            arr[j][i]=arr[j+1][i-1]-arr[j][i-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1-i;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }
    y=arr[0][1];
    int fact=1;
    int fac=1;
    float u=(x-arr[0][0])/(arr[1][0]-arr[0][0]);
    printf("\n%f",u);
    u=0.4;
    int u1=u;
    for(int i=2;i<=n;i++)
    {
        y=y+(u1*arr[0][i])/fact;
        
        fact=fact*i;
        u1=u1*(u-(i-1));
    }
    printf("\n%f",y);
}