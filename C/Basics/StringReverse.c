/*	25 nisan 2016 Gtu bilgisayar Toplulugu C atolye egitimleri	*/
#include <stdio.h>
#include <string.h>

void stringReverse( char *str );

int main(){
	char atolye[80] = "Gebze Teknik Universitesi Bilgisayar Toplulugu ";

	stringReverse(atolye);

	printf("\n");

	return 0;
}

void stringReverse( char *str ){

	int i,j, flag =1;

	if(str == NULL) return;
	else if(str[0] == '\0') return;
	
	for(i=0; i < strlen(str) && flag; ++i){
		if(str[i] == ' ' || str[i+1] == '\0' ){
			if(str[i] == ' ')
				stringReverse(&str[i+1]);
		
			
			for(j=0; j < i;++j){
				printf("%c", str[j]);
			}
			printf(" ");
			flag = 0;
		}

	}
	

	return;

}


