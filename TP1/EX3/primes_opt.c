#include "header.h"

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime_opt(int n)
{
    // write is_prime function code here
    bool x = {true};
	if(n==1||n==2)
		return true;	
    for(int i=3;i<sqrt(n);i+=2)
    {
        if(n%i==0)
            return false;   
    }
    return true;
}


void    get_primes_opt(int n)
{
    // write get_primes_opt function code here that use is_prime_opt function
    for (int i = 2;i<=n;i++)
    {
        if (is_prime_opt(i))
            printf("%d is prime\n",i);
    }
    
}
