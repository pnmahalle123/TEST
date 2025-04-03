#include <stdio.h>


int addArray(int a[10],int num)
{
	int i,sum=0;

    for(i=0;i<num;i++)
		sum=sum+*(a+i);

	return sum;
}



int main()
{
    int array[10],n,add,i;

    printf("\n\n\t Enter number of elements in given array:");
    scanf("%d",&n);

    printf("\n\n\t Enter Array elements :");

    for(i=0;i<n;i++)
    	scanf("%d",&array[i]);

	add=addArray(array,n);

	printf("\n\n\t Sum of Array elements is %d\n\n",add);

return 0;
}


