#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define AFTER 1
#define EQUAL 0
#define BEFORE -1

/*Helper unctions*/
int sumIfNumberIsEven(int paramSum, int paramNumber);

int main(){

	/* Variable Declarations */
	int numberLimit;
	int sum = 0;
	int i;
	
	printf("Program takes a number and sums all the even numbers from zero to number.\n");

	printf("Please enter the number: \n");
	scanf("%d", &numberLimit);
	
	
	for(i = 0; i <= numberLimit ; ++i){
		sum = sumIfNumberIsEven(sum, i);
	}
	
	printf("Sum of even numbers: %d\n", sum);




	return 0;
}


int sumIfNumberIsEven(int paramSum, int paramNumber){

	if(paramNumber%2 == 0){
		paramSum += paramNumber;
	
	}
	
	return paramSum;
}


