/*
 * C program to accept N numbers sorted in ascending order
 * and to search for a given number using binary search.
 * Report success or failure.
 */
#include <stdio.h>
#define SIZE 20

typedef enum Boolean{
	false,
	true
}Boolean;
 
void bubbleSort(int *array, int size);
Boolean binarySearch( int *array, int size, int key , int *index);


 
int main()
{
    int array[SIZE];
    Boolean result = false;
    int i, j, num, temp, keynum ,index = -1;
   
 
    printf("Enter the size of the array that should be lower than %d\n", SIZE);
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Array elements \n");
    for (i = 0; i < num; i++)
    {
        printf("array[%d] -> %d\n", i , array[i]);
    }
    
    bubbleSort(array, num);
    
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("array[%d] -> %d\n", i ,array[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d", &keynum);
    
    result = binarySearch( array, num, keynum , &index);
    
    if(result == true){
    	printf("Found at index %d ! Nailed it!!\n", index);
    }else{
    	printf("Sorry boi, couldn't find the key ! Please mercy!\n");
    }
    
    
    return 0;
}


Boolean binarySearch( int *array, int size, int key , int *index){

 	int temp;
    int low, mid, high;
	/*  Binary searching begins */
    low = 1;
    high = size;
    do
    {
        mid = (low + high) / 2;
        if (key < array[mid])
            high = mid - 1;
        else if (key > array[mid])
            low = mid + 1;
    } while (key != array[mid] && low <= high);
    if (key == array[mid])
    {
    	*index = mid;
        return true;
    }
    else
    {
    	*index = -1;
        return false;
    }

}



void bubbleSort(int *array, int size){
	int i, j, temp;

	/*  Bubble sorting begins */
		for (i = 0; i < size; i++)
		{
		    for (j = 0; j < (size - i - 1); j++)
		    {
		        if (array[j] > array[j + 1])
		        {
		            temp = array[j];
		            array[j] = array[j + 1];
		            array[j + 1] = temp;
		        }
		    }
		}
}
