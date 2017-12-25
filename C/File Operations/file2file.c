#include <stdio.h>


int main(){

	/*File pointers variables*/
	FILE *iptr, *optr;
	
	int numberForOperation = 0;
	int control;
	
	iptr = fopen("numbers.txt", "r");
	optr = fopen("reversedNumbers.txt", "w");
	
	
	if(iptr != NULL && optr != NULL){
	
		for(control = fscanf(iptr, "%d", &numberForOperation); 
		control != EOF; 
		control = fscanf(iptr, " %d", &numberForOperation))
		{
		
			while(numberForOperation != 0 ){
				fprintf(optr,"%d",numberForOperation%10);
				numberForOperation = numberForOperation / 10;
			}
			fprintf(optr," ");
			
		}
	}
	else
	{
		printf("Couldn't open the files. Try again and check your files.");
	
	}
	
	fclose(iptr);
	fclose(optr);
	return 0;
}
