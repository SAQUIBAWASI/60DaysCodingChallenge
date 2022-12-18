#include<stdio.h>
int recSum(int n)
{
if(n<=1)
return n;
//recursive call
return n+recSum	(n-1);
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Sum = %d",recSum(n));
	return 0;
}
