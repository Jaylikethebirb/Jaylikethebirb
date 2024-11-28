#include <stdio.h>
int swapaddsub(int *x, int *y) {
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return 0;
}
int swapxor(int*x, int*y) {  
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
    return 0;
}
int swaptemp(int *a, int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int swapmuldiv(int *a, int*b) {
    *a=*a*(*b);
    *b=*a/(*b);
    *a=*a/(*b);
    return 0;
}

int main() {
    int a=2;
    int b=3; 
    printf("%d %d\n",a,b) ;
    swapxor(&a,&b) ;
    printf("%d %d\n",a,b);
    return 0;
}


