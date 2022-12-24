#include<stdio.h>
void cal(int n,float mat[][n+1],float val[])
{
    for(int t=0;t<n;t++)
                {
                    for(int p=0;p<=n;p++)
                    printf("%f ",mat[t][p]);
                    printf("\n");
                }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                float ratio=mat[j][i]/mat[i][i];
                for(int k=0;k<n+1;k++)
                {
                    mat[j][k]=mat[j][k]-(ratio*mat[i][k]);
                }
                for(int t=0;t<n;t++)
                {
                    for(int p=0;p<=n;p++)
                    printf("%f ",mat[t][p]);
                    printf("\n");
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        val[i]=mat[i][n]/mat[i][i];
        //printf("\n%f",val[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    float x[n],y[n];
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);
    for(int i=0;i<n;i++)
    scanf("%f",&y[i]);
    float sum_x=0,sum_y=0,sum_xy=0,sumx2=0,sumx3=0,sumx4=0,sumx2y=0;
    for(int i=0;i<n;i++){
    sum_x=sum_x+x[i];
    sum_y=sum_y+y[i];
    sum_xy=sum_xy+x[i]*y[i];
    sumx2=sumx2+x[i]*x[i];
    sumx3=sumx3+x[i]*x[i]*x[i];
    sumx4=sumx4+x[i]*x[i]*x[i]*x[i];
    sumx2y=sumx2y+x[i]*x[i]*y[i];
    
    }
    int m=3;
    float matrix[m][m+1];
    matrix[0][0]=n;
    matrix[0][1]=sum_x;
    matrix[0][2]=sumx2;
    matrix[0][3]=sum_y;
    matrix[1][0]=sum_x;
    matrix[1][1]=sumx2;
    matrix[1][2]=sumx3;
    matrix[1][3]=sum_xy;
    matrix[2][0]=sumx2;
    matrix[2][1]=sumx3;
    matrix[2][2]=sumx4;
    matrix[2][3]=sumx2y;
    float val[m];
    cal(m,matrix,val);
    printf("Eqn is y=%f+x%f+x2%f+",val[0],val[1],val[2]);
}