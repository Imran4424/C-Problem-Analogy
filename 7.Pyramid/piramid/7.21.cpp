#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k,m,p;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m-1;j++)
        {
          printf("  ");
        }
        m--;p=1;
        for(k=j;k<=n;k++)
        {
           printf("%d ",p) ;
           p++;
        }
        printf("\n");
    }






}














