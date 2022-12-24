#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(cos(x)+1-3*x);
}
float fder(float x)
{
    return(-1*sin(x)-3);
}
int  main()
{
     float a=0,b=1;
    while(1)
    {
        printf("Enter the two numbers");
        scanf("%f%f",&a,&b);
        if(f(a)*f(b)<0)
        {
            printf("\nRoots lie between a and b");
            break;
        }
        else
        {
            printf("\nRoots dont lie between a and b...re enter the value");
            scanf("%f%f",&a,&b);
        }
    }
   printf("\nEnter the tolerance");
    float tol=0.001;
    scanf("%f",&tol);
    float x=(a+b)/2;
    while (1)
    {
        if(fabs(f(x))<tol)
        {
            printf("Roots=%f",x);
            break;
        }
        x=x-(f(x)/fder(x));

    }
    
}