#include "header.h"

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime(int n)
{
    // write is_prime function code here
	bool x = {true};	
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
            return false;   
    }
    return true;
}


void    get_primes(int n)
{
    // write get_primes function code here that use is_prime function
    for(int i=2;i<=n;i++)
    {
        if(is_prime(i))
            printf("%d is prime\n",i);
    }
}

