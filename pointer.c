#include<stdio.h>
int main(){
    int a=100;
    int *b=&a;
    printf("%d\n",*b);
    printf("%d\n",b);
    printf("%d\n",&b);
    int c=30;
    int *d=&c;
    int *e=&d;
    printf("%d\n",*e);
    printf("%d\n",*d);
    printf("%d\n",e);


    return 0;
}