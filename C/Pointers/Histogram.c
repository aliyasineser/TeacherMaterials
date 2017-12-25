#include <stdio.h>

int calc_hist(int sentinel, int* hist0, int* hist1, int* hist2, int* hist3,
        int* hist4, int* hist5, int* hist6, int* hist7, int* hist8, int* hist9);

int main(void) {
    /* Sentinel value variable */
    int sentinel;
    /* hist variables */
    int hist0, hist1, hist2, hist3, hist4, hist5, hist6, hist7, hist8, hist9;
    /* Variable for exit status of calc_hist function */
    int es;

    /* Set sentinel */
    sentinel = -8;

    es = calc_hist(sentinel, &hist0, &hist1, &hist2, &hist3, &hist4, &hist5,
            &hist6, &hist7, &hist8, &hist9);

    printf("Function returned: %d\n", es);
    printf(" 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9\n");
    printf("--------------------------------------\n");
    printf(" %d | %d | %d | %d | %d | %d | %d | %d | %d | %d\n", hist0, hist1,
            hist2, hist3, hist4, hist5, hist6, hist7, hist8, hist9);

    return 0;
}

int calc_hist(int sentinel, int* hist0, int* hist1, int* hist2, int* hist3,
        int* hist4, int* hist5, int* hist6, int* hist7, int* hist8, int* hist9) {

    int inputNum;
    char junk;
    *hist0 = 0;
    *hist1 = 0;
    *hist2 = 0;
    *hist3 = 0;
    *hist4 = 0;
    *hist5 = 0;
    *hist6 = 0;
    *hist7 = 0;
    *hist8 = 0;
    *hist9 = 0;

    if (sentinel >= 0 && sentinel < 10)
        return -2;



    while (scanf("%d", &inputNum) == 0) {

        scanf("%c", &junk);

    }
    if (inputNum == sentinel)
        return -1;

    while (inputNum != sentinel) {
        if ((inputNum >= 0 && inputNum < 10)) {
            switch (inputNum) {
                case 0:
                    *hist0 += 1;
                    break;
                case 1:
                    *hist1 += 1;
                    break;
                case 2:
                    *hist2 += 1;
                    break;
                case 3:
                    *hist3 += 1;
                    break;
                case 4:
                    *hist4 += 1;
                    break;
                case 5:
                    *hist5 += 1;
                    break;
                case 6:
                    *hist6 += 1;
                    break;
                case 7:
                    *hist7 += 1;
                    break;
                case 8:
                    *hist8 += 1;
                    break;
                case 9:
                    *hist9 += 1;
                    break;
                default:
                    break;
                    ;

            }
        }

        while (scanf("%d", &inputNum) == 0) {

        scanf("%c", &junk);

    }
    }
    return *hist0 +
            *hist1 +
            *hist2 +
            *hist3 +
            *hist4 +
            *hist5 +
            *hist6 +
            *hist7 +
            *hist8 +
            *hist9;

}
