#include<stdio.h>
float f(float x)
{
    return(1/(x*x+1));
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
    float odd_sum=0,even_sum=0;
    for(int i=1;i<n-1;i++)
    {
        if(i%2==0)
        even_sum=even_sum+y[i];
        else
        odd_sum=odd_sum+y[i];
       
    }
    even_sum=even_sum*2;
    odd_sum=odd_sum*4;
    sum=odd_sum+even_sum;
    sum=sum+y[0]+y[n-1];
    sum=sum*mid/3;
    printf("\n%f",sum);
}