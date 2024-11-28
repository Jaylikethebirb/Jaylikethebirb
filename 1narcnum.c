#include <stdio.h>
#include <math.h>
double getlen(int a) {
    double i;
    i=0;
    while(a!=0) {
        i=i+1;
        a=a/10;
    }
    return (i);
}


int main() {
    int num;
    int numalt;
    double b,n,sum;
    sum=0;
    b=0;

    printf("Enter Number    ");
    scanf("%d", &num);
    
    numalt=num;
    
    n=getlen(num);
    
    while(num!=0){
        b=num%10;
        sum+= pow(b,n );
        num/=10;
    }

    if (sum==numalt) {
        printf("Number is narcissitic");
    } 
    if (sum!=numalt) {
        printf("Number is not narcissistic");
    }
}