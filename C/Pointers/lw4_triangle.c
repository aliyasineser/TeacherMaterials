#include <stdio.h>


void triangle(int width);

int main(){

	triangle(11);

	return 0;
}


void triangle(int width){

	int space, inner_space, i, j;
	space = (width-1)/2;


	/*Ilk kisim*/

	i = space;
	while( i > 0){
		printf(" ");
		--i;
	}	
	printf("*\n");

	inner_space = 1;
	space--;
	while( space != 0 ){
		
		i = space;
		while( i > 0){
			printf(" ");
			--i;
		}
		printf("*");	
		
		i = inner_space;
		while( i > 0){
			printf(" ");
			--i;
		}
		printf("*\n");

		inner_space += 2;
		space--;	

	}	

	i = width;
	while( i > 0){
		printf("*");
		--i;
	}
	printf("\n");




}
