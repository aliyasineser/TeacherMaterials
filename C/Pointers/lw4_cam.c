#include <stdio.h>


void pine(int width, int triangle_n);
void triangle(int width);
void rect( int width, int height, int spacing_left );

int main(){

	pine(7,2);

	return 0;
}


void pine(int width, int triangle_n){

	int i;


	for( i = 0; i < triangle_n; ++i){
		triangle(width);
	}
	rect( width/2, width/2, width/4 + 1 );

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








void rect( int width, int height, int spacing_left ){

	int i,j;

	if(width >=3 && height >=3){

		i=spacing_left;
		while(i>0){
			printf(" ");
			--i;
		}

		for( i = width; i > 0; --i ){
			printf("*");	
		}	
		printf("\n");

		for( i = 0; i < height - 2; ++i ){
		
			j=spacing_left;
			while(j>0){
				printf(" ");
				--j;
			}
			printf("*");

			j=width-2;
			while(j>0){
				printf(" ");
				--j;
			}	
			printf("*\n");
		
		}

		i=spacing_left;
		while(i>0){
			printf(" ");
			--i;
		}

		for( i = width; i > 0; --i ){
			printf("*");	
		}	
		printf("\n");

	}
}
