/*Write a C Program to swap two float values using pointers.*/

void swap(float *n1,float *n2)
{
	float temp;

	 temp=*n1;
     *n1=*n2;
	 *n2=temp;

/*	printf("\n\n\t  After Swapping \n\n\t Values of *n1= %f and *n2= %f",*n1,*n2);
	printf("\n\n\t 	Values of n1=%d and n2=%d",n1,n2);	*/
}

int main()
{

	float num1,num2;

	printf("\n\n\t Enter any two float values:- ");
	scanf("%f%f",&num1,&num2);

	printf("\n\n\t Before Swapping \n\n\t Values of num1= %f and num2= %f",num1,num2);
	printf("\n\n\t Address of &n1 = %d and &n2 = %d",&num1,&num2);
	printf("\n\n\t *********************************************\n\n");

	swap(&num1,&num2);

	printf("\n\n\t  After Swapping \n\n\t Values of num1= %f and num2= %f",num1,num2);
	printf("\n\n\t Address of &n1 = %d and &n2 = %d",&num1,&num2);
return 0;
}

