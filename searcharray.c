#include <stdio.h>

void searchArrayElement(int a[10],int num,int found)
{
	int i,flag;

    for(i=0;i<num;i++)
		{
			if(a[i]==found)
					flag=0;
				{
					break;
				}

			else
					flag=1;

		}

	if(flag==0)
		printf("\n\n\t Element is found in given array");
	else
		printf("\n\n\t Element is NOT found in given array");

}



int main()
{
    int array[10],n,i,search;

    printf("\n\n\t Enter number of elements in given array:");
    scanf("%d",&n);

    printf("\n\n\t Enter Array elements :");

    for(i=0;i<n;i++)
    	scanf("%d",&array[i]);

    printf("\n\n\t Enter  searching element in given array:");
    scanf("%d",&search);

	searchArrayElement(array,n,search);

	printf("\n\n\t in main ");

return 0;
}


