#include <stdio.h>
#include <string.h>
int isvowel(char a) {
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        return 1;
    }else {
        return 0;
    }
}
int main() {
    int count=0,check=0,len=0;
    char str[50] ;
    printf("Enter string\t");
    fgets(str,sizeof(str),stdin);
    len=strlen(str)-1;
    for (int i=0;i<len;i++) {
        if(isvowel(str[i])) {
            if (check==1) {
                count++;
                check=0;
            }else {
                check=1;
            }
        }else {
            check=0;
        }
    }
    printf("Number of vowels occuring in pairs side by side is\t%d",count);
    return 0;
}
