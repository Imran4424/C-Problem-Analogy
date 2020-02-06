#include<bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int i,j,n;
    a[0]=0;
    for(i=1;i<=100;i++)//1.2.3 + 2.3.4 + 3.4.5 + ... + n(n+1)(n+2)
    {
        a[i]=i*(i+1)*(i+2);
        printf("%d \n",a[i]);

    }









}


















