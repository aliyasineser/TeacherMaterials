#include <stdio.h>
#include <string.h>

void foo(char *str){
	if(str==NULL) return;
	else if(str[0] == '\0') return;

	
	foo(&str[1]);
	printf("%c", str[0]);
}


int main(){

	char getrekt[8] = "lelrekt";
	
	foo(getrekt);
	printf("\n");
	return 0;


}
