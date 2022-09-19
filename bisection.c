
    
#include <stdio.h>
#include<math.h>
float f(float a)
{
     return((cos(a)+1)/3);
}
float f_(float a)
{
    return((-1*sin(a))/3);
}
float ori(float a)
{
    return(cos(a)+1-3*a);
}
int main() {
float a,b;
while(1){
printf("Enter the value  of a,b");
scanf("%f",&a);
if(f_(a)<1)
{
    printf("\nvalid value");
    break;
}
printf("\ninvalid value");
}

float tol;
printf("\nEnter the tolerance");
scanf("%f",&tol);
int it=0;
float temp=f(a);
while(1)
{
    it++;

    if(fabs(ori(a))<tol)
    {
        printf("\nFinal ans after %d iteration=%f",it,a);
        break;
    }
    
    printf("\nAfter %d iteration =%f %f",it,a,f(a));
   
    a=f(a);
    
}

    return 0;
}
