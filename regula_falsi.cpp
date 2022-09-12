// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
float f(float a)
{
    return(a*log10(a) - 1.2);
}

int main() {
float a,b;
while(1){
printf("Enter the value  of a,b");
scanf("%f %f",&a,&b);
if(f(a)*f(b)<0)
{
    printf("\nroots lie between a,b");
    break;
}
printf("\nRoots notlie between a&b...re-enter the value..");
}
float tol;
printf("\nEnter the tolerance");
scanf("%f",&tol);
int it=0;
while(1)
{
    it++;
    float x=a-((b-a)/(f(b)-f(a)))*f(a);
    if(fabs(f(x))<tol)
    {
        printf("\nFinal ans after %d iteration=%f",it,x);
        break;
    }
    
    printf("\nAfter %d iteration =%f",it,x);
    if(f(a)*f(x)<0)
    b=x;
    else
    a=x;
}

    return 0;
}
