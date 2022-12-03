#include <stdio.h>

main() {

   int a ;
   int b ;
   int c ;
   printf("Enter two numbers a and b : \n");
	scanf("%d%d", &a, &b);
   c = a + b;
   printf("Addition of two number is: %d\n", c );
	
   c = a - b;
   printf("Subtracts two number is: %d\n", c );
	
   c = a * b;
   printf("Multiplies two number is: %d\n", c );
	
   c = a / b;
   printf("Divides two numbers is: %d\n", c );
	
   c = a % b;
   printf("Modulus two numbers is: %d\n", c );
	
   c = a++; 
   printf("Increment is %d\n", c );
	
   c = a--; 
   printf("Decrement  is %d\n", c );
}
