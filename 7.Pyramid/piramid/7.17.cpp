#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k,m;
    scanf("%d",&n);
    m=n+1;
    k=1;
    for(i=1;i<=n;i++)
    {

        for(j=i;j<=n;j++)
        {
            if(j%2==0)
            printf("%d ",1);
            else
            printf("%d ",0);
            k++;
        }

        printf("\n");
    }




}











