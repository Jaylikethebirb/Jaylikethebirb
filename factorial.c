#include <stdio.h>
unsigned long long int getfacrec(int n) {
    unsigned long long int fac= (unsigned long long int)n;
    if (n==0) {
        return 1;
    }else if (n==1) {
        return  1;
    }else {
        fac=fac*getfacrec(n-1) ;
    }
    return fac;
}
unsigned long long int getfac(int n){
    unsigned long long int fac=1;
    while(n>0){
        fac*=n;
        n--;
    }
    return fac;
}
int main() {
    int n;
    printf("Enter number\t ");
    scanf("%d", &n);
    printf("Factorial is\t  %llu \n", getfac(n));
    return 0;
}
