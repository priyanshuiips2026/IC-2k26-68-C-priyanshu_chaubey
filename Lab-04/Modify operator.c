
#include <stdio.h>

int main() {
 
    int a=5,b;
    //pre-increament operator
    b=++a;
    printf("++a: %d %d\n",a,b);
    //post-increament operator 
    b=a++;
    printf("a++: %d %d\n",a,b);
    
    //pre-decrement operator
    b=--a;
    printf("--a: %d %d\n",a,b);
    //post-decrement operator
    b=a--;
    printf("a--: %d %d\n",a,b);

    return 0;
}