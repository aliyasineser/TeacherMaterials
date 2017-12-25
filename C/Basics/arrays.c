#include <stdio.h>
#define DEBUG 1
#define NOT_FOUND -1
#define SIZE 10

int get_min_sub(const int data[], int data_size);
void fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep);
void push(char stack[], char item, int *top, int max_size);
char pop(char stack[], int *top);
int search(const int arr[], int target, int n);
void bubble_sort(int list[], int n);

int main()
{
	int nums[SIZE] = {0, 2, -7, 5, 10, 8, 6, 2, 18, 22}; 
	int i;

	bubble_sort(nums, SIZE);

	for(i=0; i<SIZE; ++i)
	{
		printf("The value of x[%d] is %d\n", i, nums[i]);
	}

	
	return 0;
}


int get_min_sub(const int data[], int data_size)
{
	int i, small_sub = 0;

	for (i = 1; i < data_size; ++i)
	{
		if (data[i] < data[small_sub])
		{
			small_sub = i;
		}
	}
	if (DEBUG) printf("The index is: %d\n", small_sub); 
	return (small_sub);
}

void 
fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep)
{
	double data;
	int i=0, status;

	status = scanf("%lf", &data);
	while (status == 1 && data != sentinel && i < dbl_max) 
	{
		dbl_arr[i] = data;
		++i;
		status = scanf("%lf", &data);
	}

	if (status != 1) 
	{
		printf("\n*** Error in data format ***\n");
		printf("*** Using first %d data values ***\n", i);
	}
	else if (data != sentinel) 
	{
		printf("\n*** Error: too much data before sentinel ***\n");
		printf("*** Using first %d data values ***\n", i);
	}
	*dbl_sizep = i;
}

void push(char stack[], char item, int *top, int max_size)
{
	if (*top < max_size-1) 
	{
		++(*top);
		stack[*top] = item;
	}
}

char pop(char stack[], int *top)
{
	char item;

	if (*top >= 0) 
	{
		item = stack[*top];
		--(*top);
	} 
	else 
	{
		item = NOT_FOUND;
	}
	return (item);
}

int search(const int arr[], int target, int n)
{
	int i=0, found=0, where;

	while (!found && i < n) 
	{
		if (arr[i] == target)
			found = 1;
		else
			++i;
	} 

	if (found)
		where = i;
	else
		where = NOT_FOUND;
	return (where);
}

void bubble_sort(int list[], int n)
{
  int i, j, temp;
 
  for (i = 0 ; i < n; i++)
  {
    for (j = i + 1 ; j < n; j++)
    {
      if (list[i] > list[j])
      {
        temp      = list[i];
        list[i]   = list[j];
        list[j] = temp;
      }
    }
  }
}






