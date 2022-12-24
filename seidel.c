#include<stdio.h>
#include<math.h>
#define epsilon 0.001
float fsum(int i,int n,float mat[][n+1])
{
    float sum=0;
    for(int j=0;j<n;j++)
    {
        if(i!=j)
        sum+=mat[i][j];
    }
    return sum;
}
int isapplied(int n,float mat[][n+1])
{
    for(int i=0;i<n;i++)
    {
        if(mat[i][i]<fsum(i,n,mat))
        return 0;
    }
    return 1;
}
void print(int n,float new[])
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%f  ",new[i]);
    }
}
void seidel(int it,int n,float mat[][n+1])
{
    float old[n],new[n];
    float sum=0;
    for(int i=0;i<n;i++)
    old[i]=new[i]=0;
    for(it;it>0;it--){
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
               if(i!=j)
               sum+=mat[i][j]*new[j];
            }
            new[i]=(mat[i][n]-sum)/mat[i][i];
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(fabs(old[i]-new[i])<epsilon)
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            print(n,new);
            return;
        }
        print(n,new);
        for(int i=0;i<n;i++)
        {
            old[i]=new[i];
        }

    }
    print(n,new);

}

int main()
{
    printf("Enter the number of variables");
    int n;
    scanf("%d",&n);

    float mat[n][n+1];
    printf("Enter the value in argumented matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&mat[i][j]);
        }
    }
    int it=4;
    isapplied(n,mat);
    seidel(it,n,mat);
    
}