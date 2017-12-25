

#include <stdlib.h>
#include "egg.h"

int main(){
	int i;
	int *ArrPtr = NULL;
	int size;	
	int arr[10];

	scanf("%d", &size);
	
	ArrPtr = (int *)malloc(sizeof(int) * size);
	

	for(i=0; i < size; ++i){
		printf("\n%d. sayiyi gir: ", i+1);
		scanf("%d", &(ArrPtr[i]));

	}

	for(i=0; i < size; ++i){
		printf("%d ", ArrPtr[i]);
		

	}
	printf("\n");


	return 0;
}
