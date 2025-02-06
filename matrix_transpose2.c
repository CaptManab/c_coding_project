#include <stdio.h>
int main()
{
	int x,y,i,j;
	printf("NUMBER OF ROWS: ");
	scanf("%d", &y);
	printf("NUMBER OF COLUMNS: ");
	scanf("%d", &x);
	int matrix_a[y][x];
	int matrix_b[x][y];
	putchar('\n');
	printf("MATRIX: \n");
	for(i=0; i<y; ++i)
	{
		for(j=0; j<x; ++j)
		{
			scanf("%d", &matrix_a[i][j]);
		}	
	}
	for(i=0; i<y; ++i) //transposing
	{
		for(j=0; j<x; ++j)
		{
			matrix_b[j][i] = matrix_a[i][j];
		}
	}
		printf("\nTRANSPOSE:\n");
	}
	for(i=0; i<x; ++i)
	{
		for(j=0; j<y; ++j)
		{
		printf("%d ", matrix_b[i][j];
				putchar('\n');
		}
	}
	return 0;
}


