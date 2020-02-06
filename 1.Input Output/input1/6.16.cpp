#include<bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int i,j,n;
    a[0]=0;
    for(i=2;i<=100;i+=3)//2.5.8 + 5.8.11 + 8.11.14 + ..
    {
        a[i]=i*(i+3)*(i+6);
        printf("%d \n",a[i]);

    }





}



















