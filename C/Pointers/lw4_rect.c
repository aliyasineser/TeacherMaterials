
#include <stdio.h>


void rect( int width, int height, int spacing_left );

int main(){

	rect(6,5,2);

	return 0;
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
