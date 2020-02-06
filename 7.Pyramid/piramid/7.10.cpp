#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k=65;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",k);
            k++;
        }
        k=65;
        printf("\n");
    }




}






