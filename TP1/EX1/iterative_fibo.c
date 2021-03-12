#include<stdio.h>
#include<stdlib.h>



int fibo_iterative(int n)
{
	int fn,f1,f2;
	if(n==0||n==1)
		return n;
	else
	{	for(int i=0;i<n;i++)
		{
			fn=f1+f2;
			fn=f2;
			f2=f1;
			return fn;
		}
        }
}

int main()
{
	int n;
	printf("donner la valeur de n:\n");
	fibo_iterative(n);

}
