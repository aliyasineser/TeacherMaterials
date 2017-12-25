#include <stdio.h>
#include <string.h>

void foo(int *arr, int size){
	int temp;	
	
	if(size <= 1) return;
	else if(arr == NULL) return;

	temp = arr[0];
	arr[0] = arr[size-1];
	arr[size-1] = temp;
	foo(&arr[1], size-2);

}


int main(){

	int i=0,getrekt[9] = {5,6,10,8,95,6,3,5, 7};
	
	for(i = 0; i < 9 ; ++i){printf("%d ", getrekt[i]);}
	printf("\n");

	foo(getrekt,9);
	printf("\n");

	
	for(i = 0; i < 9 ; ++i){printf("%d ", getrekt[i]);}

	printf("\n");

	return 0;


}
