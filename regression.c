#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float x[n],y[n];
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);
    for(int i=0;i<n;i++)
    scanf("%f",&y[i]);
    float sum_x=0,sum_y=0,sum_xy=0,sumx2=0;
    for(int i=0;i<n;i++){
    sum_x=sum_x+x[i];
    sum_y=sum_y+y[i];
    sum_xy=sum_xy+x[i]*y[i];
    sumx2=sumx2+x[i]*x[i];
    }
    float byx=((n*sum_xy)-(sum_x*sum_y))/((n*sumx2)-(sum_x*sum_x));
    float xbar=sum_x/n;
    float ybar=sum_y/n;
    printf("Regression line=y-%f=%f(x-%f)",ybar,byx,xbar);
}

