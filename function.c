#include<stdio.h>
int fact(int a){
    if(a<2){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int a=10;
    printf("%d",fact(a));
    return 0;
}