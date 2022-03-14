#include <stdio.h>

int a=121;
float b=2.1;
char c='a';

int main(){
    printf("a= %d\n (float) a= %.3f\n (double) a= %.3f\n (char) a= %c\n\n\n",a,(float)a,(double)a,(char)a);
    
    printf("b: %.3f \n (int)b: %d\n (double)%.3f\n(char)b: %c\n\n",b,(int)b,(double)b,(char)b);
    printf("c: %c\n(int)c: %d\n(float)c: %.3f\n",c,(int)c,(float)c);
    return 0;
}