#include <stdio.h>
#include <stdlib.h>

int* gameStep(int* input, int* select, int* output){
    int preds[4][4] = { {5,2,1,3},
                        {2,4,1,5},
                        {6,3,2,1},
                        {5,4,6,7} };

    int i,j;
    int selected = select[0] + select[1]*2; 
    int numreds=0, numwhites=0;
    int markArray[4] = {0,0,0,0};
    
    for(i=0; i<4; ++i )
        if(input[i] == preds[selected][i]){
            ++numreds;
            markArray[i] = 1;
        }

    for(i=0; i<4; ++i){
        for(j=0; j < 4; ++j){
            if((!markArray[j]) & (input[i] == preds[selected][j]))
                markArray[j] = 2;
        }
    }
    
    #Bunlar led, mark arraye led bagla
    for(i=0;i < 4; ++i)
        output[i] = markArray[i];

    return output;
}



int main(){
    int select[2];
    int input[4];
    int output[4];
    int i=0,j; 
    int countred;
    int countwhite;

    printf("Enter the select bits (2 bits):\n");
    scanf("%d %d", &select[0], &select[1]);

    for(j=0;; ++j){
        countred = 0;
        countwhite = 0;
        printf("Enter pls:");
        for(i =0; i < 4 ; ++i){
            scanf("%d", &input[i]);
        }
        gameStep(input, select, output);
        for(i=0; i < 4; ++i){
            printf("%d ", output[i]);
            if(output[i] == 2)
                countwhite++;
            else if (output[i] == 1)
                countred++;
            else;
        }
        printf("\n");


        if(countred == 4)break;
    }
    printf("You won bruh!\n");
    return 0;
}
