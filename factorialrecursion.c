#include <stdio.h>
unsigned long long int getfactorial(int n) {
    unsigned long long int fac= (unsigned long long int)n;
    if (n==0) {
        return 1;
    }else if (n==1) {
        return  1;
    }else {
        fac=fac*getfactorial(n-1) ;
    }
    return fac;
}
int main() {
    int n;
    printf("Enter number\t ");
    scanf("%d", &n);
    printf("Factorial is\t  %llu \n", getfactorial(n));
    return 0;
}
