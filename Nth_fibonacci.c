#include<stdio.h>
int fib(int n)
{
	if(n <= 1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int n,x;
	printf("Enter n:");
	scanf("%d",&n);
	x=fib(n);
	printf("Nth fibnocci number is %d\n",x);
	
}

