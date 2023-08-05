//WAP to find simple interest

#include<stdio.h>
main()
{
	float si,p,r,n;
	printf("SIMPLE INTEREST\n");
	printf("Enter the Principle:\n");
	scanf("\n%f",&p);
	printf("Enter the Interest Rate:\n");
	scanf("\n%f",&r);
	printf("Enter the Time:\n");
	scanf("\n%f",&n);
	si=(p*r*n)/100;
	printf("Simple Interest is %.2lf",si);
}
