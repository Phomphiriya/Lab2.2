#include<stdio.h>
int main() 
{
	int x = 2, num1, num2,y=1;
		printf("First num : ");
		scanf_s("%d", &num1);
		printf("Second num : ");
		scanf_s("%d", &num2);
	while(x<=num1 && x<=num2)
	{	
		if (num1 % x ==0 && num2 % x ==0)
		{
			num1/=x;
			num2/=x;
			y = y * x;
			
		}
		else x++;
	}
	printf("%d", y);
	return 0;
}