/*************************************************************************
 Program for sorting the elements by bubble sort method
					     Date: 24-10-02
**************************************************************************/
/* Header Files*/

#include<stdio.h>
#include<conio.h>
#include<process.h>
 /*Declaration*/
void bubblesort(int a[20],int n);
/*
 Name:Bubblesort
 Input Parameter:array a,total elements n
 Output Parameter:none
 Called By:main()
 Calls:none
 */
void bubblesort(int a[20],int n)
	   {
	   int i,j,m,temp;
	   for(i=0;i<n-1;i++)
	   {
		for(j=0;j<n;j++)
		 {  if(a[j]>a[j+1])
		{  temp=a[j];
		   a[j]=a[j+1];
		   a[j+1]=temp;
		}
		 }
	  }

	  //Printing the sorted array//

	  for(i=0;i<n;i++)
		printf("\n\t%d",a[i]);
	   }
/*
 Name:main()
 Input Parameter:none
 Output:none
 Called By O.S.
 Calls:bubblesort()
 */
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
   bubblesort(a,n);
   getch();
}
/********************** End Of Program ************************************/


