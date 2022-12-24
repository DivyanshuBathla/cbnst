#include<stdio.h>
float f(float x,float y)
{
    return(y-x);
}
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float h,xn;
    scanf("%f%f",&h,&xn);
    int n=xn/h;
    float y[n+1],x[n+1];
    float k1,k2,k3,k4,k;
    y[0]=b;x[0]=a;
    for(int i=1;i<=n;i++)
    {
        x[i]=x[i-1]+h;
        k1=h*f(x[i-1],y[i-1]);
        k2=h*f(x[i-1]+(h/2.0),y[i-1]+(k1/2.0));
        k3=h*f(x[i-1]+(h/2.0),y[i-1]+(k2/2.0));
        k4=h*f(x[i-1]+h,y[i-1]+k3);
        k=(k1+2*k2+2*k3+k4)/6.0;
        y[i]=y[i-1]+k;
    }
    printf("\n%f Val=%f",x[n],y[n]);
}