//WAP to find area of circle, rectangle and triangle 

#include<stdio.h>
#define PI 3.14
main()
{
	float r, cir;
	int rect, l, w;
	float tri, b, h;
	int ch;
	printf("--------AREA----------\n");
	printf("Press 1 for Area of Circle\n");
	printf("Press 2 for Area Of Rectangle\n");
	printf("Press 3 for Area of Triangle\n");
	printf("\n");
	printf("Enter Your Choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n");
			printf("Area of Circle\n");
			printf("Enter the value of r:\n");
			scanf("\n%f",&r);
			cir=PI*r*r;
			printf("Area of Circle is %.2lf",cir);
			break;
		case 2:
			printf("\n");
			printf("Area of Rectangle\n");
			printf("Enter the value of length:\n");
			scanf("\n%d",&l);
			printf("Enter the value of Width:\n");
			scanf("\n%d",&w);
			rect=l*w;
			printf("Area of Rectangle is %d",rect);
			break;
		case 3:
			printf("\n");
			printf("Area of Triangle\n");
			printf("Enter the value of Base:\n");
			scanf("\n%f",&b);
			printf("Enter the value of Height:\n");
			scanf("\n%f",&h);
			tri=0.5*b*h;
			printf("Area of Triangle is %.2lf",tri);
			break;
		default:
			printf("Press 1, 2, 3 Only");
			break;
	}
}
