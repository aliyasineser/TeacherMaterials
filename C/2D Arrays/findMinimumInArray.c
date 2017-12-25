#include <stdio.h>

int findMinInArray(int *arr, int size, int *min);
void fill2DArray (int arr[][3], int size1, int size2);
void print2DArray(int arr[][3], int size1, int size2);
int findMinsInArray(int arr[][3] , int minArr[3], int size1);



int main(void)
{
	int array[3][3];
	int minArr[3];
	int i, j;	
	int m, ind;

	
	fill2DArray(array, 3, 3);
	print2DArray(array, 3, 3);
	m = findMinsInArray(array, minArr, 3);


	printf("Minimum = %d\n", m );




	return 0;
}

int findMinsInArray(int arr[][3], int minArr[3], int size1)
{
	int i; 
	int min;
	for(i = 0; i<size1; ++i)
	{
		findMinInArray(arr[i], size1, &min);
		minArr[i] = min;
	}

	findMinInArray(minArr, size1, &min);
	return min;
}

void print2DArray(int arr[][3], int size1, int size2)
{
	int i, j;

	for (i = 0; i < size1; ++i)
	{
		for (j = 0; j < size2; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}



void fill2DArray(int arr[][3], int size1, int size2)
{
	int i, j;

	for (i = 0; i < size1; ++i)
	{
		for (j = 0; j < size2; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}



	printf("filling is done !!\n");
}





/* returns index */ 
int findMinInArray(int *arr, int size, int *min)
{
	int i;
	int index = -1;

	if(size <= 0)
	{
		printf("array is empty\n");
		return index;
	}

	*min = arr[0];
	index = 0;


	for (i = 1; i < size; ++i)
	{
		if(*min > arr[i])
		{
			*min = arr[i];
			index = i;
			printf("%d\n", i);
		}
	}

	return index;
}