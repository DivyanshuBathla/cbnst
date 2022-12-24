#include<stdio.h>
float f(float x)
{
    return(1/(x*x*x+10));
}
int main()
{
    float a,b;
    printf("enter the lower limit and upper limit");
    scanf("%f%f",&a,&b);
    int n;
    scanf("%d",&n);
    float mid=(b-a)/(1.0*n-1);
    float x[n],y[n];
    x[0]=a;
    for(int i=1;i<n;i++)
    {
        x[i]=x[i-1]+mid;
    }
    for(int i=0;i<n;i++)
    {
        y[i]=f(x[i]);
         printf("%f ",y[i]);
    }
    float sum=0;
    for(int i=1;i<n-1;i++)
    {
        sum=sum+y[i];
       
    }
    sum=sum*2;
    sum=sum+y[0]+y[n-1];
    sum=sum*mid/2;
    printf("\n%f",sum);
}