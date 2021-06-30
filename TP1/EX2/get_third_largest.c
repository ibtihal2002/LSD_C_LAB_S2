#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
        // write your algo here
    int x=0
    int y=0
    int z=0;
    for(int i=0;i<size;i++)
    {
        if (tab[i]>x)
        {
            z=y;
            y=x;
            x=tab[i];
        }
        if (tab[i]>y && tab[i]<x)
        {
            z=y;
            y=tab[i];
        }
        if (tab[i]>z && tab[i]<y)
            z=tab[i];
    }
    return z;
}
