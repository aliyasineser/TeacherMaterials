#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define AFTER 1
#define EQUAL 0
#define BEFORE -1

/*Helper unctions*/
int isFirstDateComesAfterTheSec(int paramFirstYear, int paramFirstMonth, int paramFirstDay, int paramSecYear, int paramSecMonth, int paramSecDay);

int main(){

	/* Variable Declarations */
	int firstYear, firstMonth, firstDay;
	int secYear, secMonth, secDay;
	int isFirst;
	
		
	printf("Welcome the date comparison program!\n"); 
	
	
	/*Asking first date*/
	do{
		
	printf("Please enter the first date as y/m/d\n");
	scanf("%d%d%d", &firstYear, &firstMonth, &firstDay);
	
	/*Error message*/
	if(!(firstYear > 0 && firstMonth < 13 && firstMonth > 0 && firstDay < 32  && firstDay > 0)){
	
		printf("Error! Please enter the first date again. \n");
	
	}
	/*Error condition*/
	}while( !(firstYear > 0 && firstMonth < 13 && firstMonth > 0 && firstDay < 32  && firstDay > 0));
	
	
	/*Asking second date*/
	do{
	
	
	printf("Please enter the second date as y/m/d\n");
	scanf("%d%d%d", &secYear, &secMonth, &secDay);
	
	/*Error message*/
	if(!(secYear > 0 && secMonth < 13 && secMonth > 0 && secDay < 32  && secDay > 0)){
	
		printf("Error! Please enter the second date again. \n");
	
	}
	/*Error condition*/
	}while( !(secYear > 0 && secMonth < 13 && secMonth > 0 && secDay < 32  && secDay > 0));
	

	/*Function call, result comes as integer, for meaning check the macros*/
	isFirst = isFirstDateComesAfterTheSec( firstYear, firstMonth, firstDay, secYear, secMonth, secDay);


	/* Result message */
	if(isFirst== AFTER)
		printf("First is coming after second\n");
	else if(isFirst== EQUAL)
		printf("First is equal with second\n");
	else
		printf("Second is coming after first\n");
		



	return 0;
}


/* Helper function that comparing two dates, 1 if first is coming after, 0 for equality and if result is -1 that means second one is coming after first */
int isFirstDateComesAfterTheSec(int paramFirstYear, int paramFirstMonth, int paramFirstDay, int paramSecYear, int paramSecMonth, int paramSecDay){
	
	
	if(paramFirstYear > paramSecYear){ 
	
		return AFTER;
		}
		else if( paramFirstYear == paramSecYear ){
		
			if(paramFirstMonth > paramSecMonth){
	
				return AFTER;
			
			}
			else if( paramFirstMonth == paramSecMonth ){
	
				if( paramFirstDay > paramSecDay ){
				
					return AFTER;
				
				}
				
				else if(paramFirstDay == paramSecDay){
				
					return EQUAL;
				}
					
			}
		
		}
	return BEFORE;
}



