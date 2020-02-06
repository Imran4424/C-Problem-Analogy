#include<bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int i,j=3,n;
    a[0]=0;
    for(i=1;i<=100;i+=2)// 1.3 + 3.5 + 5.7 + ... + n(n+2)
    {
        a[i]=i*j;
        printf("%d \n",a[i]);
        j+=2;
    }









}
















