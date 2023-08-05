// WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int year, day, nyears, ndays;
	printf("Convert Days into Years\n");
	printf("Enter the Number of Days:\n");
	scanf("\n %d",&ndays);
	year=ndays/365;
	printf("Number of Years is %d \n",year);
	
	printf("Convert Years into days\n");
	printf("Enter the Number of Years:\n");
	scanf("\n %d",&nyears);
	day=nyears*365;
	printf("Number of days is %d",day);
}
