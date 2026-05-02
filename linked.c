#include<stdio.h>
struct Node{
    int val;
    struct Node *next;
};
int main(){
    struct Node head;
    head.val=10;
    struct Node a;
    a.val=20;
    head.next=&a;
    a.next=NULL;
    printf("%d->%d",head.val,a.val);

    return 0;
}