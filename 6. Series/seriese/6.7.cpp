#include<bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int i,j=1,n;
    a[0]=0;
    for(i=2;i<=100;i+=3)// 2.1+5.3+8.5
    {
        a[i]=i*j;
        printf("%d \n",a[i]);
        j+=2;
    }









}















