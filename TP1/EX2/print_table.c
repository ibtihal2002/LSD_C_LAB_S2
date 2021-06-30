#include "header.h"

/*
** Note: iterating pointer array is the same as stack array.
*/
void    print_table(int *tab, int size)
{
    // iterate the array tab and print its elements
    
    if(tab.head==NULL)
    printf("[]");
    else
    {
        size =tab.size;
        printf("[");
        for(int i=0;i < n-1;i++)
            printf("%d,",tab.head[i]);
        printf("%d]",tab.head[n-1]);
    }
    printf("\n");
    return;
}
