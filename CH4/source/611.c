#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k, l;
	int a[5] = { 5,4,3,2,1 };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[j] > a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;

			}
		}
	}

	for (j = 0; j < 5; j++)
	{
		printf("%d ", a[j]);

	}


	return 0;

}