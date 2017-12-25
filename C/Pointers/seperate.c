#include <stdio.h>
#include <math.h>

void seperate(double num, char *signp, int *wholep, double *fracp);
int main() {
    int  whole;
    char sign;
    double frac, n;
    
    printf("Analiz edilecek sayiyi giriniz : ");
    scanf("%lf", &n);
    
    seperate(n, &sign, &whole, &frac);
    printf("%c\n%d\n%.2f\n", sign, whole, frac);
    return 0;
}
void seperate(double num, char *signp, int *wholep, double *fracp) {
    
    double temp;
    
    if (num < 0) {
        *signp = '-';
    }
    else if (num == 0) {
        *signp = ' ';
    }
    else {
        *signp = '+';
    }
    
    *wholep = floor(fabs(num));
    
    *fracp = fabs(num) - *wholep;   
}


