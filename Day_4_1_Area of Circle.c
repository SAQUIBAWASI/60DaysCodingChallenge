#include<stdio.h>
#define PI 3.141
int main()
{
	float  radius,area;
	printf("Enter the radius:\n");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("Area of Circle is: %f\n",area);
	return 0;
}
