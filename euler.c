#include<stdio.h>
float f(float x,float y)
{
    return((y-x)/(y+x));
}
int main()
{
  float a,b;
  scanf("%f%f",&a,&b);
  float xn;
  int n;
  scanf("%f",&xn);
  scanf("%d",&n);
  printf("b");
  
  float h=(xn-a)/(n*1.0);
  float x[n+1],y[n+1];
  x[0]=a;
  y[0]=b;
  for(int i=1;i<=n;i++)
  {
      x[i]=x[i-1]+h;
      y[i]=y[i-1]+h*f(x[i-1],y[i-1]);
      printf("\nx=%f f(x)=%f",x[i],y[i]);
  }
printf("Value=%f",y[n]);
}