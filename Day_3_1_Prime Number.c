#include<stdio.h>
int main()
{
int n,i,j=0;
printf("Enter any number of  n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(n% i==0){
		j++;
	}
	}
	if(j==2){
		printf("N is a prime number");
	}	
	else{
		printf("N is a not prime number");
	}
	return 0;
}

