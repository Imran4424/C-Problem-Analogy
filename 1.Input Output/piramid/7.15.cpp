#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k,m;
    scanf("%d",&n);
    m=n+1;
    for(i=1;i<=n;i++)
    {
        k=m;
        for(j=i;j<=n;j++)
        {

            printf("%d ",k);
            k++;
        }
        m--;
        printf("\n");
    }




}










