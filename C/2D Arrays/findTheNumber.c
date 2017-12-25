#include <stdio.h>

int searchNumber(int number, int arr[3][3], int size, int size1, int *index, int *iIndex, int *jIndex);
void print2D(int arr[3][3], int size, int size1);

int main()
{
	int index,i,j;
	int arr[3][3] = {
		{2,3,4},
		{5,6,7},
		{10,11,12}
	};
	
	print2D(arr, 3,3);
	printf("\n");
	searchNumber(6, arr, 3, 3, &index, &i, &j);
	printf("i=%d j=%d Total Index = %d\n", i,j,index);

	return 0;
}

void print2D(int arr[3][3], int size, int size1)
{
	int i;
	for(i=0; i<size*size1; ++i)
	{
		printf("%d ", arr[i/size][i%size1]);
		if((i%size1) == size1 - 1)
			printf("\n");
	}
}

int searchNumber(int number, int arr[][3], int size, int size1, int *index, int *iIndex, int *jIndex)
{
	int i,j;

	for(i = 0; i<size; ++i)
	{
		for(j = 0; j<size1; ++j)
		{
			if (number == arr[i][j])
			{
				*index = i*size1 + j;
				*iIndex = i;
				*jIndex = j;
				return 0;
			}

		}
	}

	return -1;
}