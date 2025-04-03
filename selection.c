#include <stdio.h>
#include <conio.h>
/****************************************************************
 Program for sorting the elements by Selection sort method
															  Date:24-10-02

*****************************************************************/
/* Header Files*/
#include<stdio.h>
#include<conio.h>
#include<process.h>

void selectsort(int a[20],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
	{
     if(a[i]>a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
}

 //Printing the sorted array//
for(i=0;i<n;i++)
  printf("\n\t%d",a[i]);
}
void main()
{
   int a[20],i,n;
   int ch;

   printf("\nEnter the number of elements in the sorting array: ");
   scanf("%d",&n);
   //Accepting n number of elements in the array//
   printf("\nEnter the elements for the array\n");
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    selectsort(a,n);
    getch();
   }

/*********************************End of main*******************************************/
