#include<stdio.h>
void convertupper(int n,float mat[][n+1])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                float ratio=mat[j][i]/mat[i][i];
                for(int k=0;k<n+1;k++)
                {
                    mat[j][k]=mat[j][k]-(ratio*mat[i][k]);
                }
            printf("\nIntermediate matrix\n");
            for(int t=0;t<n;t++)
            {
               for(int p=0;p<n+1;p++)
               printf("%f ",mat[t][p]);
               printf("\n");
            }
            }
        }
    }
}
void back(int n,float mat[][n+1],float val[])
{
    val[n-1]=mat[n-1][n]/mat[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        float sum=0;
        for(int j=i+1;j<n;j++)
        sum=sum+mat[i][j]*val[j];
        val[i]=(mat[i][n]-sum)/mat[i][i];
    }
}
void value(int n,float val[])
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%f ",val[i]);
    } 
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
    float val[n];
    convertupper(n,mat);
    back(n,mat,val);
    value(n,val);
}