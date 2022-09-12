// Online C compiler to run C program online
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
int main() {
float a,b;
while(1){
printf("Enter the value  of a,b");
scanf("%f",&a);
if(f_(a)<1)
{
    printf("\nroots lie between a,b");
    break;
}
printf("\nRoots notlie between a&b...re-enter the value..");
}

int it=0;
float temp=8;
while(1)
{
    it++;

    if(a==temp)
    {
        printf("\nFinal ans after %d iteration=%f",it,a);
        break;
    }
    
    printf("\nAfter %d iteration =%f %f",it,a,f(a));
    temp=a;
    a=f(a);
    
}

    return 0;
}
