/*
Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo) 
*/

#include<stdio.h>
 main ()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter the values of a: \n"); 
	scanf("%d",&a);
	printf("enter the values of b: \n");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("Addition : %d\n substraction : %d\n Multiplication : %d\n dividion :%d\n modulo: %d\n",add,sub,mul,div,mod);
	
}
