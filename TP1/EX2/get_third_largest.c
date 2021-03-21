#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
        // write your algo here
        int first, second, third;
        int i;
        int size=100;
        int tab[size];
        first=0;
        second=0;
        third=0;
        for(i=0;i<size;i++)
                if(tab[i]>first)
                        first=tab[i];
        for(i=0;i<size,i++)
                if(tab[i]>second && tab[i]<first)
                        second=tab[i];
        for(i=0;i<size;i++)
                if(tab[i]>third && tab[i]<second)
                        third=tab[i];
        return third;
}
