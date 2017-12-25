#include <stdio.h>

#define SIZE_LEL 11
void reverseArray(int arrayz[], int size);

int main(){

	int i;
	int array[SIZE_LEL] = { 10,2,-5,61,54,90,-1,61,35,4 , 95};

	for(i = 0; i < SIZE_LEL ; ++i){
		printf( "array[%d] -> %d\n" , i, array[i] );
	
	}
	
	printf( "\n" );


	reverseArray( array, SIZE_LEL );


	for(i = 0; i < SIZE_LEL ; ++i){
		printf( "array[%d] -> %d\n" , i, array[i] );
	
	}
	
	printf( "\n" );




	return 0; 
}


void reverseArray(int arrayz[], int size){

	int temp,i;
	
	for(i =0; i < (size / 2); ++i){
		temp = arrayz[i];
		arrayz[i] = arrayz[size-1-i];
		arrayz[size-1-i] = temp;
	}




}
