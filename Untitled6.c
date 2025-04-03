#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum = sum + ((2*i)+1);
    }
    printf("%d",sum);
}
