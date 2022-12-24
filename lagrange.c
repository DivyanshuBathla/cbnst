#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the value of n");
    scanf("%d",&n);
    float x[n],f[n];
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);
     for(int i=0;i<n;i++)
    scanf("%f",&f[i]);
    printf("\nEnter the value you want to calculate=");
    float y;
    scanf("%f",&y);
    float sum=0;
   // printf("%f\n",x[0]);
    for(int i=0;i<n;i++)
    {
        float num=1,den=1;
        for(int j=0;j<n;j++)
        {
            if(j!=i){
            num=num*(y-x[j]);
           // printf("%f ",x[i]);
            }
        }
        for(int k=0;k<n;k++)
        {
              if(k!=i)
              den=den*(x[i]-x[k]);
        }
        sum=sum+(num/den)*f[i];
    }
    printf("\n%f",sum);
}