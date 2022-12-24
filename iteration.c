#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(x*x*x-5*x+1);
}

float fder(float x)
{
    return(2*x*x/5);
}
// float f(float x)
// {
//     return(cos(x)+1-3*x);
// }
// float fder(float x)
// {
//     return(-1*sin(x)/3);
// }
// float fx(float x)
// {
//     return((cos(x)+1)/3);
// }
int main()
{
    float a;
    while(1)
    {
        printf("Enter the two numbers");
        scanf("\n%f",&a);
        if(fder(a)<1)
        {
            printf("\nRoots lie between a and b");
            break;
        }
        else
        {
            printf("\nRoots dont lie between a and b...re enter the value");
            scanf("%f",&a);
        }
    }
   printf("\nEnter the tolerance");
   float tol=0.001;
    scanf("%f",&tol);
    while(1)
    {
        printf("\n%f =%f",a,f(a));
        if(fabs(f(a))<tol)
        {
            printf("\nThe roots is =%f",a);
               break;
        }
        a=fx(a);
        
    }
}