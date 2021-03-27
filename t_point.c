#include<stdio.h>
#include<stdlib.h>
struct s_point
{
	int x;
	int y;
};
typedef struct s_point t_point;

void scan_dim(t_point *dim)
{
	printf("entrer la dimension du tableau\n");
	scanf("%d%d",&(dim->x),&(dim->y));
	printf("dim= (%d,%d)\n", dim->x, dim->y);
}
