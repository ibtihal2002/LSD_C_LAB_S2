#include<stdio.h>
#include<stdlib.h>

int fibo_rec(int n)
{
	if(n==0||n==1)
		return n;
	else
		return (fibo_rec(n-1)+fibo_rec(n-2));
}

int main()
{
	int n;
	printf("donner le nombre n: ");
	scan("%d",&n);
}
