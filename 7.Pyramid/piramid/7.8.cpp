#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          if(k%2==0)
            printf("%d ",0);
          else
            printf("%d ",1);
          k++;
        }
        k=j;
        printf("\n");
    }




}





