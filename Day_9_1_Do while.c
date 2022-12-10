#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value a:");
	scanf("%d",&a);
	do{
		printf("value of a: %d\n",a);
		a++;
	}
	while(a<20);
	return 0;
}
