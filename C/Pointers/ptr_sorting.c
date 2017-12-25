

#include <stdio.h>
#include <math.h>

void swap(int *a, int *b);
void sort2(int *a, int *b);
void sort3(int *n1, int *n2, int *n3);

int main () {
    
    int n1, n2, n3;
    
    
    printf("3 adet sayi giriniz : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    sort3(&n1, &n2, &n3);
    
    printf("Siralanmis hali = %d  %d  %d dir\n", n1, n2, n3);

    return 0;
}

void swap(int *a, int *b) {
    int temp;
    
        temp = *a;
        *a = *b;
        *b = temp;
}

void sort2(int *a, int *b) {
    if (*a > *b) {
        swap(a, b);
    }
}

void sort3(int *n1, int *n2, int *n3) {
    sort2(n1, n2);
    sort2(n2, n3);
    sort2(n1, n2);
}
