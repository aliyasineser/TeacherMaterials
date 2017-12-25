
#include <stdio.h>

void foo(int x, int *y);

int main() {
    
    int a, b;
    
    a = 2;
    b = 3;
    
    foo(a, &b);
    
    printf("%d %d\n", a, b);
    
   	a *= 2;
	foo(a,&b);    


    printf("%d %d\n", a, b);
    
    
    
    return 0;
}

void foo(int x, int *y) {
    *y = x * x;
    
    
}

