#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(x*x*x-5*x+1);
}
int main()
{
    float a=0,b=1;
    // while(1)
    // {
    //     printf("Enter the two numbers");
    //     scanf("%f%f",&a,&b);
    //     if(f(a)*f(b)<0)
    //     {
    //         printf("\nRoots lie between a and b");
    //         break;
    //     }
    //     else
    //     {
    //         printf("\nRoots dont lie between a and b...re enter the value");
    //         scanf("%f%f",&a,&b);
    //     }
    // }
   // printf("\nEnter the tolerance");
    float tol=0.001;
    //scanf("%f",&tol);
    while(1)
    {
        float mid=a-((b-a)/(f(b)-f(a)))*f(a);
        printf("\n%f val=%f",mid,f(mid));
        if(fabs(f(mid))<tol)
        {
            printf("\nThe roots is =%f",mid);
            break;
        }
        printf("\n%f",f(a)*f(mid));
        if(f(a)*f(mid)<0)
        b=mid;
        else
        a=mid;
        
    }
}