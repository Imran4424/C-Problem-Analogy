/*
    10.13. Write a program that read an array and display median

*/


#include <iostream>
using namespace std;

int main()
{
    int a[100], n, temp;
    printf("Enter the nth position of array: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ",a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nsorted list is : \n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    float median;

    if(n%2==0)
    {
        // int / int  - will always be interger
        // float = int / int - this float will catch only integer part
        // float = (float)int / int - this float will catch a true float value
        float sum = a[n / 2] + a[(n / 2) - 1];
        median = sum / 2 ;
    }
    else
    {
        // -1 cause index starts from 0
        median = a[(n/2 - 1) + 1];
    }
    printf("\n\nmedian is %f: ", median);


    return 0;
}