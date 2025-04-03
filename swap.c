/*Write a C Program to swap two float values using pointers.*/
int main()
{

	float *num1,*num2,temp,n1,n2;

	printf("\n\n\t Enter any two float values:- ");
	scanf("%f%f",&n1,&n2);

	num1=&n1;
	num2=&n2;

	printf("\n\n\t Before Swapping \n\n\t Values of n1= %f and n2= %f",n1,n2);
	printf("\n\n\t Values of &n1= %d and &n2= %d",&n1,&n2);

	printf("\n\n\t  num1=%d and num2 =%d",num1,num2);
	printf("\n\n\t *num1=%f and *num2 =%f",*num1,*num2);
	printf("\n\n\t *********************************************\n\n");
	 temp=*num1;
	 *num1=*num2;
	 *num2=temp;

	printf("\n\n\t  After Swapping \n\n\t Values of n1= %f and n2= %f",n1,n2);
	printf("\n\n\t Values of &n1= %d and &n2= %d",&n1,&n2);

	printf("\n\n\t num1=%d and num2 =%d",num1,num2);
	printf("\n\n\t *num1=%f and *num2 =%f",*num1,*num2);



return 0;
}

