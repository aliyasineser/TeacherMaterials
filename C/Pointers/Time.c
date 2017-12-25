#include <stdio.h>
int read_time(int *h, int *m);

int main(void)
{
	/* Variables for hours and minutes */
	int h, m;
	/* Variable for storing exit status of read_time function */
	int es;

	es = read_time(&h, &m);

	printf("Function returned: %d\n", es);
	printf("Hours: %d Minutes: %d\n", h, m);

	return 0;
}


int read_time(int *h, int *m)
{
	
	char inputCharacter;

	
	*h = 0;
	*m = 0;

        for( scanf("%c", &inputCharacter); 
                inputCharacter != ':'; 
                scanf("%c", &inputCharacter) ){
            
            if( inputCharacter >= '0'  &&  inputCharacter <= '9' ){
                *h = *h * 10 + ((int)inputCharacter - 48 );
                 
                }
            else if( inputCharacter != ' ' && inputCharacter != '\t' && inputCharacter != '\n' ){
                
                return -1;
            }
            
            
        }
        
        
        
        for( scanf("%c", &inputCharacter); 
                inputCharacter != 't'; 
                scanf("%c", &inputCharacter) ){
            
            if( inputCharacter >= '0'  &&  inputCharacter <= '9' ){
                *m = *m * 10 + ((int)inputCharacter - 48 );
                 
                }
            else if( inputCharacter != ' ' && inputCharacter != '\t' && inputCharacter != '\n' ){
                
                return -1;
            }
            
            
        }

        
        	if(*h > 23 || *h < 0 || *m > 59 || *m < 0)
	{
		return -1;
	}

        return 0;
        
}  

