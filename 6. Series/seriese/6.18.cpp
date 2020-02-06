#include<bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int i,j,n;
    a[0]=0;
    for(i=5;i<=100;i++)//1.3.5.7 + 3.5.7.9 + 5.7.9.11 + ... + n(n+2)(n+4)(n+6)
    {
        a[i]=i*(i+2)*(i+4)*(i+6);
        printf("%d \n",a[i]);

    }





}





















