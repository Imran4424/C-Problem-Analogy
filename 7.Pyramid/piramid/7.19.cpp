#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k,m;
    scanf("%d",&n);
    m=n+1;
    k=64+n;
    for(i=1;i<=n;i++)
    {

        for(j=i;j<=n;j++)
        {
            printf("%c ",k);

        }
        k--;
        printf("\n");
    }




}












