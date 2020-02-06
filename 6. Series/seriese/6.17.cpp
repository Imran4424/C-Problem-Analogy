#include<bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int i,j,n;
    a[0]=0;
    for(i=5;i<=100;i++)//5.6.7 + 6.7.8 + 7.8.9 + ... + n(n+1)(n+2)
    {
        a[i]=i*(i+1)*(i+2);
        printf("%d \n",a[i]);

    }





}




















