#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,n,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=i;j<=n;j++)
        {
            if(k%2==0)
            printf("%d ",0);
            else
            printf("%d ",1);
            k++;
        }

        printf("\n");
    }




}









