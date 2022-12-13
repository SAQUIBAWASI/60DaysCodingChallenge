#include<stdio.h> 
int main()
{
	int x,y;
	printf("Enter the number X:");
	scanf("%d",&x);
	printf("\nEnter the number Y:");
	scanf("%d",&y);
	int temp=x;
	x=y;
	y=temp;
	printf("\n Aftere Swapping: x=%d",x,y);
	return 0;
}
