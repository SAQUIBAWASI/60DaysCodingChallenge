#include<stdio.h>
const int M=3;
const int N=3;
void print(int arr[M][N])
{
	int i,j;
	for(i=0;i<M;i++)
	for(j=0;j<N;j++)
	printf("%d",arr[i][j]);
	
}
int main()
{ 
int arr[][3]={{1,3,4},{5,6,7},{7,9,8};
printf(arr);
return 0;
}
