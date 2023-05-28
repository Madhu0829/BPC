#include <stdio.h>
int main()
{
   int n1, n2;
   printf("Input the value of n1:");
   scanf("%d", &n1);
   printf("Input the value of n2:");
   scanf("%d",&n2);
   if (n1 != n2)
   {
	printf("n1 is not equal to n2\n");
	//Nested if else
	if (n1 > n2)
	{
		printf("n1 is greater than n2\n");
	}
	else
	{
		printf("n2 is greater than n1\n");
	}
   }
   else
   {
	printf("n1 is equal to n2\n");
   }
   return 0;
}