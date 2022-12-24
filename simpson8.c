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
    float th_sum=0,even_sum=0;
    for(int i=1;i<n-1;i++)
    {
        if(i%3==0)
        th_sum=th_sum+y[i];
        else
        even_sum=even_sum+y[i];
       
    }
    even_sum=even_sum*3;
    th_sum=th_sum*2;
    sum=th_sum+even_sum;
    sum=sum+y[0]+y[n-1];
    sum=sum*mid*3/8;
    printf("\n%f",sum);
}