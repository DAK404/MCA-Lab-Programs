class matrixmul {
  public static void main(String args[]) {
  int a[][]={{1,2},{3,4}};
  int b[][]={{2,4},{6,8}};
int c[][]=new int[2][2];
int i,j,k;
for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
     {
       c[i][j]=0;       
         for(k=0;k<2;k++)
       { 
       c[i][j]=c[i][j] + a[i][k] * b[k][j];
       } 
    }
}

for(i=0;i<2;i++)
{
   for(j=0;j<2;j++)
     {
       System.out.print(c[i][j] + "\t");
    }
       System.out.print("\n");
}
}
}
